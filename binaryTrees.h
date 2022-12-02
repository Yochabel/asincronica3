//
// Created by Sam Q on 21/11/2022.
//

#ifndef ARBOLES_BINARYTREES_H
#define ARBOLES_BINARYTREES_H
//Cola
typedef struct queueStruct *Queue;

typedef struct TreeStruc * tree;
tree createTree();
void addRoot(tree t1, int value);
void printTree(tree t1);
void deleteValue(tree t1, int elem);
int isBST(tree t);
void widthSerch(tree t1);

#endif //ARBOLES_BINARYTREES_H
