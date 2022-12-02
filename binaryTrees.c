//
// Created by Sam Q on 21/11/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include "binaryTrees.h"

typedef struct nodeStructB{
    int value;
    struct nodeStructB * left;
    struct nodeStructB *right;
    struct nodeStructB *father;
}Node;
 struct TreeStruc{
    Node * root;
};

 tree createTree(){
     tree newTree=malloc(sizeof (struct TreeStruc));
     newTree->root=NULL;
     return newTree;
 }
void addLeft(Node *node , int value){
    Node * new=malloc(sizeof (Node));
    new->value=value;
    node->left=new;
    new->left=NULL;
    new->right=NULL;
    new->father=node;
}
void addRight(Node *node , int value){
    Node * new=malloc(sizeof (Node));
    new->value=value;
    node->right=new;
    new->left=NULL;
    new->right=NULL;
    new->father=node;
}
void seekAndAddB(Node * node, int value){

    if(value<=node->value){
        if(!node->left){
            addLeft(node, value);
            return;
        }
        seekAndAddB(node->left, value);
    } else{
        if(!node->right){
            addRight(node, value);
            return;
        }
        seekAndAddB(node->right, value);
    }


}
 void addRoot(tree t1, int value){
     Node * new=malloc(sizeof (Node));
     new->value=value;
     if(t1->root==NULL){
         t1->root=new;
         t1->root->left=NULL;
         t1->root->right=NULL;
         t1->root->father=NULL;
     } else{
         seekAndAddB(t1->root, value);
     }

 }
 void preorden(Node * node){
     if(node){
         printf(" %d ",node->value);
         preorden(node->left);
         preorden(node->right);
     }

 }
void preOrder(Node *current) {
    if (current) {
        printf("%d -> %d, %d \n", current->value,
               current->left ? current->left->value : -1,
               current->right ? current->right->value : -1);
        preOrder(current->left);
        preOrder(current->right);
    }
}
 void inorder(Node * node){
     if(node){
         inorder(node->left);
         printf(" %d ",node->value);
         inorder(node->right);
     }

 }
void posorder(Node * node){
    if(node){
        posorder(node->left);
        posorder(node->right);
        printf(" %d ",node->value);
    }

}
void printTree(tree t1){
     if(!t1->root){
         printf("Empty Tree\n");
         return;
     }
    printf("Preorder:\n");
    preOrder(t1->root);
    //printf("\nInorder:\n");
    //inorder(t1->root);
    //printf("\nPosorder:\n");
    //posorder(t1->root);

 }

 Node * sucesor(Node * cur){
     Node *result=cur->right;
     Node * min=result->left;
     while (min){
         result=min;
         min=min->left;
     }
     return result;
 }



 void seekAndDestroy( Node * root, Node * node, int elem){
     if(node->value==elem) {
         //caso 1
         if (!node->right && !node->left) {
             if (node->father) {
                 // el father no tiene hijo izquiero truena if (node->father->left->value == elem)
                 if (node->father->left && node->father->left->value == elem) {
                     node->father->left = NULL;
                     free(node);
                 } else {
                     node->father->right = NULL;
                     free(node);
                 }
             }
         }
             //caso 2: unico hijo es izquiero
         else if (!node->right && node->left) {
             if (node->father) {
                 if (node->father->left->value == elem) {
                     node->father->left = node->left;
                     node->left->father = node->father;
                     free(node);
                 } else {
                     node->father->right = node->left;
                     node->left->father = node->father;
                     free(node);
                 }
             } else {
                 //Current es el nodo raíz
                 node->left->father = NULL;
                 root = node->left;
                 free(node);

             }
         }

        //caso 2: unico hijo es derecho
         else if(node->right && !node->left){
             if(node->father){
                 if (node->father->left->value==elem){
                     node->father->left=node->right;
                     node->right->father=node->father;
                     free(node);
                 } else{
                     node->father->right=node->right;
                     node->right->father=node->father;
                     free(node);
                 }
             } else{
                 //Current es el nodo raíz
                 node->left->father = NULL;
                 root = node->left;
                 free(node);
             }
         }
         //caso 3: tiene dos hijos
         else{
             Node * suce= sucesor(node);
             node->value=suce->value;
             seekAndDestroy(root,node->right, node->value);
         }
         int val= node->value;
     } else if(elem< node->value){
             if(!node->left) {
                 printf("Value not found\n");
                 return;
             }
             seekAndDestroy(root,node->left, elem);

     } else{
         if(!node->right) {
             printf("Value not found\n");
             return;
         }
         seekAndDestroy(root,node->right, elem);

     }
     }

 void deleteValue(tree t1, int elem){
     if (!t1->root){
         printf("Unable to delate value\n");
         return;
     }
     seekAndDestroy(t1->root, t1->root, elem);

 }
 //Colas
 struct NodeStruct{
     Node * treenode;
     struct NodeStruct *next;
 };
typedef struct NodeStruct nodeC;
struct queueStruct{
    int size;
    nodeC *front;
    nodeC *back;
};

Queue createQueue(){
    Queue newQueue = malloc(sizeof(struct queueStruct));
    newQueue->front= NULL;
    newQueue->back= NULL;
    newQueue->size = 0;
    return newQueue ;
}
void enqueue(Queue q, Node * nodeT){
    nodeC *newq=malloc(sizeof(nodeC));
    newq->treenode=nodeT;
    newq->next=NULL;
    if( q-> size==0){
        q->front=newq;
    }
    else{
        q->back->next=newq;
    }
    q->back=newq;
    q->size++;
}
void dequeue(Queue queue){

    if(queue->size==0){
        printf("Cola vacia");
        return;
    }
    printf(" %d ",queue->front->treenode->value);
    nodeC* temp=queue->front;
    queue->front=queue->front->next;
    free(temp);
    queue->size--;
}
void widthSerch(tree t1){
    Queue cola=createQueue();
    enqueue( cola, t1->root);


    while (cola->front){
        //Para que agregue los dos hijos
        int a=cola->back;

        if(cola->front->treenode->left && cola->front->treenode->right){
            enqueue(cola, cola->front->treenode->left);
            enqueue(cola, cola->front->treenode->right);

        } else if(cola->front->treenode->left){
            enqueue(cola, cola->front->treenode->left);
        }
        else if(cola->front->treenode->right){
            enqueue(cola, cola->front->treenode->right);
        }
        dequeue(cola);

    }

 }
int min(Node *current) {
    if (current->left==NULL)
        return current->value;
    return min(current->left);
}
int max(Node *current) {
    if (!current->right)
        return current->value;
    return max(current->right);
}
int isBST(tree t){
    if(t->root == NULL){
        return 1;
    }
    int right = max(t->root);
    int left = min(t->root);
    if(t->root->value>right|| t->root->value<left){
        return 0;
    }
    tree treeleft = createTree();
    treeleft->root=t->root->left;
    tree treeright = createTree();
    treeleft->root=t->root->right;
    int checkLeft = isBST(treeleft);
    int checkRight = isBST(treeright);
    free(treeleft);
    free(treeright);
    if(checkLeft != 1 || checkRight!= 1){
        return 0;
    } else{
        return 1;
    }

}
