#include <stdio.h>
#include "pila.h"
#include "binaryTrees.h"




int main() {
    printf("-------Ejercicionumberjuan---------\n");
    char pila[]="{(a+b}*5-7}";
    printf("%s\n",pila);
    Stack stack1 = createStack();
    addStringToStack(stack1,pila);
    printf("\n-------Ejercicionumbertow---------\n");
    tree tree1=createTree();
    addRoot(tree1,60);
    addRoot(tree1,41);
    addRoot(tree1,74);
    addRoot(tree1,16);
    addRoot(tree1,53);
    addRoot(tree1,65);
    addRoot(tree1,25);
    addRoot(tree1,46);
    addRoot(tree1,55);
    addRoot(tree1,63);
    addRoot(tree1,70);
    addRoot(tree1,42);
    addRoot(tree1,62);
    addRoot(tree1,64);
    printTree(tree1);
    deleteValue(tree1, 24);
    printTree(tree1);

    printf("%i",isBST(tree1));

    printf("\n-------Ejercicionumbertrii---------\n");

    printf("\n");
    widthSerch(tree1);

    return 0;

}
