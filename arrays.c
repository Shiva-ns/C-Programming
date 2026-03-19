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

#if 0

#endif
