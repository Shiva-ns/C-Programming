#include <stdio.h>
#if 0
// Find missing number in array (1 to N)

int find_the_missing_number(int *, int, int *);
int main()
{
    int arr[5] = {2, 2, 4, 3, 5};
    int miss = 0;
    find_the_missing_number(arr, 5, &miss);
    printf("The Missing number in an array is : %d\n", miss);
}
int find_the_missing_number(int *arr, int len, int *mis)
{
    for (int i = 1; i <= len; i++)
    {
        int count = 0;
        for (int j = 0; j < len; j++)
        {

            if (i == j[arr])
            {
                count++;
                break;
            }
        }
        if (!count)
        {
            *mis = i;
            break;
        }
    }
}
#endif

#if 0
// Move all zeros to end
#include <stdio.h>
int main()
{
    int size = 5;
    int arr[size];
    printf("Enter the Array Elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", arr + i);
    }
    printf("\nBefore Update : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) != 0)
        {
            continue;
        }
        for (int j = i + 1; j < size; j++)
        {
            if ((*(arr + i) != *(arr + j)) && 0 != *(arr + j))
            {
                int t = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = t;
                break;
            }
        }
    }
    printf("\nAfter Update : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
}

#endif

#if 0
// Check if array is palindrome
int main()
{
    int arr[5];
    printf("Enter the numbers : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag = 0;
    for (int j = 0; j < 5 / 2; j++)
    {
        if (arr[j] != arr[5 - j - 1])
        {
            flag = 1;
            break;
        }
    }
    (!flag) ? printf("This is palindrom array\n") : printf("This is not Palindrom array.");
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>
// Remove duplicate characters
int main()
{
#define MAX_LIMIT 100
    char *str = NULL;
    str = malloc(MAX_LIMIT);
    if (str == NULL)
    {
        return 1; // Always check if memory allocation worked
    }

    fgets(str, MAX_LIMIT, stdin);
    printf("Before removing the duplicate charecters in sting : %s\n", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                int k = j + 1;
                while (str[k] != '\0')
                {
                    str[k - 1] = str[k];
                    k++;
                }
                str[k - 1] = '\0';
                j--;
            }
        }
    }
    printf("After removing the duplicate charecters in sting : %s\n", str);

    free(str); // Clean up the memory when you are done
    return 0;
}
#endif

#if 0
int main()
{
    printf("5/2 = %d\n", 5 / 2);     // out put  = 2
    printf("5.0/2 = %d\n", 5.0 / 2); // out put  = 0 ub
    int i = 5;
    printf("%d %d %d\n", ++i, i++, i); // out put = undefine behaviour at this kind of codes
    printf("Hello"
           "World\n"); // HelloWorld  concatination will happens
}
#endif

#if 0
int main()
{
    /*int a = 10;
    int *p = &a;
    printf("%d %d", *p, p);*/

    /*int a[] = {10, 20, 30};
    printf("%d", *(a + 1));*/

    int *p;
    int p[5];
}

#endif

#if 0
// Rotate array by k positions

#endif

#if 0
int main()
{
    int val[5] = {4, 5, 1, 10};
    int *p = val;
    printf("the val : %d\n", (*p)++);
}

#endif

#if 0
#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30};
    int *p = arr;
    printf("the val: %d\n", (*p));
    printf("the val: %d\n", *p);
}

#endif

#if 1


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
