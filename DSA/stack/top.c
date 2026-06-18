#include "stack.h"

void top_element()
{
    if (top == -1)
    {
        printf("Stack is MT\n");
        return;
    }
    printf("THe top most element in the Stack is = [%d]\n", stack_arr[top]);
}