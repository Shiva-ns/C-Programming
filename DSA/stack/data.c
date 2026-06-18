#include "stack.h"
void print()
{
    if (top == -1)
    {
        printf("Stack is MT\n");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("[%d] ", stack_arr[i]);
    }
    printf("\n");
}