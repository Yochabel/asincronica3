#include <stdio.h>
#include "pila.h"

int main() {
    char pila[]="((a+b)*5)-7";
    Stack stack1 = createStack();
    printStack(stack1);
    addStringToStack(stack1,pila);
    printStack(stack1);
    return 0;
}
