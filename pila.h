typedef struct StackStruct *Stack;
Stack createStack();
void printStack(Stack stack);
void push(Stack stack, char value);
int pop(Stack stack);
void addStringToStack(Stack pila,char array[]);