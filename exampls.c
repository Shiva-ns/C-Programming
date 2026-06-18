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
#include <stdio.h>
int main()
{
    int a = 0x12345678;
    printf("Hex : %X\n", a);
    printf("Decimal : %d\n", a);
    printf("Octal : %o\n", a);
    return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
    int a = 0x12345678;
    unsigned char *ptr = (unsigned char *)&a;
    printf("Hex : %X\n", ptr[0]);
    printf("Decimal : %d\n", ptr[0]);
    printf("Octal : %o\n", ptr[0]);
    return 0;
}
#endif

#if 0

#endif