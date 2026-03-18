#include <stdio.h>
#if 0
// Reverse a number
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Before reverse the number: %d\n", num);
    int mod = 0;
    int rev = 0;
    while (num > 0)
    {
        mod = num % 10;
        rev = mod + (rev * 10);
        num = num / 10;
    }
    printf("After the Reverse: %d", rev);
}

#endif

#if 0
// Palindrom also same logic
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Before reverse the number: %d\n", num);
    int mod = 0;
    int rev = 0;
    while (num > 0)
    {
        mod = num % 10;
        rev = mod + (rev * 10);
        num = num / 10;
    }
    printf("After the Reverse: %d", rev);
}

#endif

#if 0
// fabinocy series number
int main()
{
    int num;
    int a = 0;
    int b = 1;
    int c = 0;
    printf("Enter  the num: ");
    scanf("%d", &num);
    int i = 0;
    while (i < num)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
}

#endif

#if 0
int swap(int *p1, int *p2)
{
    int t = *p1;
    *p1 = *p2;
    *p2 = t;
}
int main()
{
    int a = 10;
    int b = 20;
    printf("Before Swap: a = %d, b = %d", a, b);

    swap(&a, &b);
    printf("\nAfter Swap: a = %d, b = %d", a, b);
}

#endif

#if 0
int main()
{
    int arr[5] = {3, 5, 7, 9, 10};
    printf("Before reverse: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    int i = 0;
    while (i < (5 / 2))
    {
        int t = arr[i];
        arr[i] = arr[5 - i - 1];
        arr[5 - i - 1] = t;
        i++;
    }
    printf("\nAfter reverse: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

#endif

#if 0
//set bits
int main()
{
    int num = 7;
    int i = 0;
    int c = 0;
    // printf("%d", sizeof(num));
    while (i < sizeof(num) * 8)
    {
        if (num & (1 << i))
        {
            c++;
        }
        i++;
    }
    printf("The total set bits in the number is =  %d\n", c);
}
#endif

#if 0
// set bits using macro
#define SET_BITS(num, i) (num & (1 << i))
int main()
{
    int num = 8;
    int i = 0;
    int c = 0;
    // printf("%d", sizeof(num));
    while (i < sizeof(num) * 8)
    {
        if (SET_BITS(num, i))
        {
            c++;
        }
        i++;
    }
    printf("The total set bits in the number is =  %d\n", c);
}

#endif

#if 0
// second larget number in the array
int main()
{
    int arr[5] = {3, 2, 5, 7, 8};
    int l = 0;
    int sec_l = 0;
    for (int i = 0; i < 5; i++)
    {
        if (l < arr[i])
        {
            l = arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (sec_l < arr[i] && arr[i] < l)
        {
            sec_l = arr[i];
        }
    }
    printf("The second lagest in an arr is : %d", sec_l);
}

#endif

#if 0
int main()
{
    int arr[5] = {3, 2, 4, 5, 6};
    int *ptr = arr;
    printf("%d ", (*ptr)++);
    printf("%d ", *ptr);
}

#endif

#if 0
int main()
{
    int arr[] = {4, 3, 6, 2, 8};
    printf("%d ",2[arr]);
}

#endif

#if 0
/*Set the 3rd bit of a number.
Input:  num = 8
Output: 12*/
#define SETBIT_AT_3rd(num, a) num | (1 << a)
int main()
{
    int num = 8;
    printf("Before setting the bit %d", num);
    printf("\nAfter the setting the 3rd bit the Value is : %d\n", SETBIT_AT_3rd(num, 2));
}
#endif

#if 0
/*Clear the 2nd bit of a number.
Input:  num = 7
Output: 5*/
#define Clear_2nd_bit(num, a) (num & (~(1 << a)))
int main()
{
    int num = 7;
    printf("Before the clearing the bit : %d\n", num);
    // printf("After the clearing 2nd bit the value is %d\n", num & (~(1 << 1)));
    printf("After the clearing 2nd bit the value is %d\n", (Clear_2nd_bit(num, 1)));
}
#endif

#if 0
/*Check if the 4th bit is set.
Example:
Input: num = 16
Output: Bit is set*/
int main()
{
    int num = 16;
    if (num &(1 << 4))
    {
        printf("SET\n");
    }
    else
    {
        printf("NOT SET\n");
    }
}

#endif

#if 0
/*Toggle the 3rd bit
Input: num = 8
Output: 0
*/
int main()
{
    int num = 8;
    printf("After toggleing the value is %d\n", num ^ (1 << 2));
}

#endif
// #include <string.h>
#if 0
// sort given array using bubble
int main()
{
    int arr[] = {3, 1, 5, 2, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", len);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

#endif

#if 0
// #include <stdio.h>

int main()
{
    int arr[] = {3, 1, 5, 2, 7};

    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Length: %d\n", len);

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

#endif
#include <stdlib.h>
#if 0
struct single
{
    int data;
    struct single *next;
};

struct single *head = NULL;
int insert(int val)
{
    struct single *node = (struct single *)malloc(sizeof(struct single));
    if (node == NULL)
    {
        printf("memory is not allocated.");
    }

    node->data = val;
    node->next = NULL;
    if (head == NULL)
    {
        head = node;
        return 0;
    }
    node->next = head;
    head = node;
}
int print()
{
    struct single *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int sort()
{
    struct single *temp = head;
    struct single *temp2;

    while (temp != NULL)
    {
        temp2 = temp->next;
        while (temp2 != NULL)
        {

            if (temp->data > temp2->data)
            {
                int t = temp->data;
                temp->data = temp2->data;
                temp2->data = t;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
}
/*int sort()
{
    struct single *temp = head;
    struct single *temp2 = head;
    struct single *temp3 = temp;

    while (temp != NULL)
    {
        temp2 = temp;
        while (temp3 != NULL)
        {

            if (temp2->data > temp3->data)
            {
                int t = temp2->data;
                temp2->data = temp3->data;
                temp3->data = t;
            }

            temp2 = temp2->next;
            temp3 = temp2->next;
        }

        temp = temp->next;
    }
}*/
int main()
{
    insert(6);
    insert(7);
    insert(2);
    insert(5);
    print();
    sort();
    print();
}
#endif

#if 0
#define TOGGLE(num, a) (num ^ (1 << 1))
int main()
{
    int num = 5;
    printf("After toggle %d\n", TOGGLE(num, 1));
}
#endif

#if 0
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (!(num & (1 << 0)))
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
}

#endif

#if 0
// Create structure to store student details
struct student
{
    char name[20];
    char schol[20];
    int class;
    char session;
};

int main()
{

    struct student std[3];
    for (int j = 1; j < 3; j++)
    {

        printf("Please Enter the student %d name:", j);
        scanf(" %[^\n]", std[j].name);
        printf("Enter the student %d school name:", j);
        scanf(" %[^\n]", std[j].schol);
        printf("Enter the student %d class:", j);
        scanf("%d", &std[j].class);
        printf("Enter the student %d session:", j);
        scanf(" %c", &std[j].session);
    }
    printf("....................................................................");
    for (int j = 1; j < 3; j++)
    {

        printf("\nthe student %d name: %s", j, std[j].name);
        printf("\nthe student %d school name:%s", j, std[j].schol);
        printf("\nthe student %d class:%d", j, std[j].class);
        printf("\nthe student %d session:%c", j, std[j].session);
    }
}

#endif
#include <stdio.h>

#if 0
int main()
{
    int num = 15;
    if (num & (1 << 0))
    {
        printf("odd number\n");
    }
    else
    {
        printf("even number\n");
    }
}
#endif

#if 0
int main()
{
    int num;
    printf("Enter the num:");
    scanf("%d", &num);
    printf("after = %d\n", (num << 1));
}
#endif

#if 0
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int i = 31;
    while (i >= 0)
    {
        if (num & (1 << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        i--;
    }
}

#endif

#if 0
int main()
{
    int a, b;
    printf("Enter the a and b values:");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Before swap:\na=%d\nb=%d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = b ^ a;
    printf("After swap:\na=%d\nb=%d\n", a, b);
}
#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif
