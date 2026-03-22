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

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif
