#include <stdio.h>
#if 0
int main()
{
    // Sort the elements of an array
    int arr[5];
    printf("Enter the array elements ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("After sorted : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

#endif

#if 0
// Removing Duplicate elements from an array
int main()
{
    /* int len;
     printf("Enter the size of array: ");
     scanf("%d", &len);*/
    int arr[10];
    int len = 10;
    printf("Enter the array elements ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < len; i++)
    {

        for (int j = i + 1; j < len; j++)
        {

            if (arr[i] == arr[j])
            {
                printf("condition is true?\n");
                for (int k = j; k < len - 1; k++)
                {

                    printf("bug %d\n", arr[k + 1]);
                    arr[k] = arr[k + 1];
                }
                len--;
                j--;
            }
        }
    }
    printf("After removing the duplocates elements : ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

#endif

#if 0
#include <limits.h>
// Find second largest element in array
int main()
{
    int arr[5];
    printf("Enter the array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The second largest in an array is : ");
    int large = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
        }
    }
    int second = INT_MIN;
    printf("The value of INT_MIN : %d", second);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != large && second < arr[i])
        {
            second = arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\nthe second largest element in an array : %d", second);
}
#endif

#if 0
// Find second smallest element in array
#include <limits.h>
int main()
{
    int arr[5];
    printf("Enter the array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The second smallest in an array is : ");
    int small = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }
    printf("\nthe smallest value in the array %d\n", small);
    int second = INT_MAX;
    // printf("The INT_MAX value: %d", second);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != small && second > arr[i])
        {
            second = arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\nthe second smallest element in an array : %d", second);
}
#endif

#if 0
// Finding  Repeating elements in an Array
int main()
{
    int arr[7];
    printf("Enter the array elements: ");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    // int d[] = {0};//buffer over flow
    /*You declared d without an explicit size, initialized with one element {0}. This creates an array of size 1.
   When you do d[inc++] = arr[j]; for the second or third duplicate found, you are writing to memory that doesn't belong to the array (Out of Bounds). This causes undefined behavior (crashes or variable corruption).*/
    int d[7];
    int flag = 0;
    int inc = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    flag = 0;
                        for (int k = 0; k < inc; k++)
                        {
                            if (arr[j] == d[k])
                            {
                                flag = 1;
                                break;
                            }
                        }
                    if (flag == 0)
                    {
                        d[inc++] = arr[j];
                    }
                }
            }
        }
    }
    printf("Finding Repeating elements : ");
        for (int i = 0; i < inc; i++)
        {
            printf("%d ", d[i]);
        }
    return 0;
}

#endif

#if 0
// Finding Non Repeating elements in an Array
int main()
{
    int arr[7];
    printf("Enter the array elements: ");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag = 0;
    printf("The non repeating Elements: ");
    for (int i = 0; i < 7; i++)
    {
        flag = 0;
        for (int j = 0; j < 7; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    flag = 1;
                }
            }
        }
        if (!flag)
        {
            printf("%d ", arr[i]);
        }
    }
}
#endif

#if 0
#include <limits.h>
int main()
{
    int arr[5];
    printf("Enter the elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int large = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
        }
    }
    int second = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != large && second < arr[i])
        {
            second = arr[i];
        }
    }
    printf("The first largest = %d\nThe seconf largest= %d\n", large, second);
}

#endif

#if 0
// Find smallest missing positive number in array
int main()
{
    int arr[5];
    printf("Enter the array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Positive numbers: ");
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d ", arr[i]);
        }
    }
    int c = 0;
    int miss = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (arr[i] > 0)
        {
            c = 0;
            for (int j = 0; j < 5; j++)
            {
                if (i == arr[j])
                {
                    break;
                }
                c++;
                if (c == 5)
                {
                    miss = i;
                    // printf("\nThe smallest missing = %d\n", i);
                }
            }
        }
    }
    if (miss)
    {
        printf("\nThe smallest missing = %d\n", miss);
    }
    else
    {
        printf("\nThe smallext missing = %d\n", arr[4] + 1);
    }
}
#endif

#if 0
// Move negative elements to one side of array
int main()
{
    int size;
    printf("Enter the size of arr: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before sepearting negative elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] < 0)
        {
            for (int j = 0; j < size / 2; j++)
            {
                if (arr[size - j - 1] > 0)
                {
                    int t = arr[i];
                    arr[i] = arr[size - j - 1];
                    arr[size - j - 1] = t;
                }
            }
        }
    }
    printf("\nAfter sepearting negative elements : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
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
