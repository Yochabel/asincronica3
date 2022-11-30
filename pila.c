#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

typedef struct NodeStruct{
    char value;
    struct NodeStruct *next;
}Node;

struct StackStruct{
    int size;
    Node *top;
};

Stack createStack(){
    Stack new_stack = malloc(sizeof(struct StackStruct));
    new_stack->top = NULL;
    new_stack->size = 0;
    return new_stack;
}


void printStack(Stack stack)
{
    if(stack->size == 0){
        printf("Empty Stack\n");
    }
    else{
        printf("Stack size: %i\n",stack->size);
        Node *current = stack->top;
        while(current!=NULL){
            printf("%c\t",current->value);
            current = current->next;
        }
    }
    printf("\n");
}

void push(Stack stack, char value){
    Node *new_node = malloc(sizeof(Node));
    new_node -> next = stack -> top;
    stack -> top = new_node;
    new_node -> value = value;
    stack -> size = stack -> size + 1;
}

int pop(Stack stack){
    if(stack->size == 0){
        printf("Empty stack");
        return -9999;
    }
    int tmp_value = stack->top->value;
    Node *tmp = stack -> top;
    stack -> top = stack -> top -> next;
    free(tmp);
    stack -> size = stack -> size - 1;
    return tmp_value;
}

int top(Stack stack){
    if(stack->size == 0){
        printf("Empty stack");
        return -9999;
    }
    return stack->top->value;
}

void addStringToStack(Stack pila,char array[]){
    for(int i=0;array[i]!='\0';i++){
        push(pila,array[i]);
    }

}