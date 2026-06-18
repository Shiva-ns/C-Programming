#include "stack.h"

void pop()
{
    if (top == -1)
    {
        printf("Stack is under flow\n");
        return;
    }
    top--;
    return;
}