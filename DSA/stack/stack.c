#include "stack.h"

// Definition of global variables used across files
int top = -1;
int stack_arr[MAX];

int main()
{
    int val;
    int chose;
    while (1)
    {
        printf("\n1. PUSH\n2. POP\n3. DATA\n4. TOP\n5. EXIT\nChoose the operattion:");
        scanf("%d", &chose);
        switch (chose)
        {
        case 1:
            printf("Enter the value:");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            print();
            break;
        case 4:
            top_element();
            break;
        case 5:
            exit(1);
            break;

        default:
            printf("invalied selection\n");
            break;
        }
    }
}