#include "stack.h"

void push(int v)
{
    if (top == MAX - 1)
    {
        printf("Stack over flow\n");
        return;
    }
    top += 1;
    stack_arr[top] = v;
    printf("pushed = %d\n", v);
    return;
}