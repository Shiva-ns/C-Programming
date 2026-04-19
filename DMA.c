#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if 0
/*Q1. malloc — single integer
Allocate memory for a single integer using malloc. Store value 50 in it. Print it. Free it.
Expected Output:
Value = 50*/

int main()
{
    int *value = (int *)malloc(sizeof(int)); // memory allocation on heap here ptr stores the address of allocated memory.
    if (value == NULL)
    {
        printf("Memory is not allocated\n");
        return 0;
    }

    *value = 50; // 50 the value stores the inside the address of returned malloc.
    printf("Value = %d\n", *value);
    free(value);
    value = NULL;
    return 0;
}
#endif

#if 0
/*Q2. malloc — array of n elements
Take n from the user. Allocate n integers using malloc. Fill them with values 1, 2, 3 ... n. Print all values. Free memory.
Expected Output: (if n=5)
1 2 3 4 5*/

int main()
{
    int n;
    printf("Enter the n: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int *ptr = malloc(n * sizeof(*ptr));
    if (ptr == NULL)
    {
        printf("Memory is not allocated\n");
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        ptr[i - 1] = i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    ptr = NULL;
    return 0;
}

#endif

#if 0
/*Q3. calloc — zero initialization
Allocate 5 integers using calloc. Print values BEFORE filling — to prove zero initialization. Then fill with 10, 20, 30, 40, 50 and print again.
Expected Output:
Before: 0 0 0 0 0
After : 10 20 30 40 50
*/

int main()
{
    int *ptr = calloc(5, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory is not Allocated.\n");
        return 1;
    }
    printf("Before: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }
    for (int i = 0; i < 5; i++)
    {
        *(ptr + i) = 10 * (i + 1);
    }
    printf("\nAfter: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }
    free(ptr);
    ptr = NULL;
    return 0;
}

#endif

#if 0
/*Q4. malloc — sum of array
Take n from user. Allocate n integers using malloc. Take values from user. Find and print sum and average. Free memory.
Expected Output: (if input is 10 20 30 40 50)
Sum     = 150
Average = 30.00*/
int main()
{
    int n;
    printf("Enetr the n: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("meory not Allocated\n");
        return 0;
    }
    printf("Enter the array Elements from User: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    int sum = 0;
    int avrg;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    printf("Sum  = %d\nAverage = %f\n", sum, ((float)sum / n));
    // printf("Sum  = %d\nAverage = %.2f\n", sum, (float)sum / n);
    free(arr);
    arr = NULL;
    return 0;
}
#endif

#if 0
/*Q5. malloc — string
Allocate memory for a string of 20 characters. Store "Hello DMA" in it. Print it. Free it.
Expected Output:
Hello DMA*/
int main()
{
    char *str = malloc(20 * sizeof(char));
    if (str == NULL)
    {
        printf("Memory is not allocated\n");
        return 1;
    }
    
    strcpy(str, "Hello DMA");
    printf("%s\n", str);
    
    free(str);
    str = NULL;
    return 0;
}
#endif

#if 0
/*Q6. free and NULL
Allocate an integer using malloc. Store 99. Print it. Free it. Set pointer to NULL. Print the pointer value to show it is NULL.
Expected Output:
Value   = 99
Pointer = (nil)*/
int main()
{
    int *ptr = malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory is not allocated\n");
        return 0;
    }
    *ptr = 99;
    printf("Value = %d\n", *ptr);
    free(ptr);
    ptr = NULL;
    if (ptr == NULL)
    {
        printf("Pointer  = (nil)");
    }
    printf("Pointer  = %p", ptr);
    return 0;
}
#endif

#if 0
/*Q7. realloc — grow array
Allocate array of 3 integers. Fill with 10, 20, 30. Print. Use realloc to grow to 6. Fill new slots with 40, 50, 60. Print all 6. Free safely.
Expected Output:
Before realloc : 10 20 30
After  realloc : 10 20 30 40 50 60*/
int main()
{
    int *arr = malloc(3 * sizeof(*arr));
    if (arr == NULL)
    {
        printf("Memory is not allocated\n");
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        *(arr + i) = 10 * (i + 1);
    }
    printf("Before realloc: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *(arr + i));
    }

    // Safe realloc using a temporary pointer
    int *temp = realloc(arr, 6 * sizeof(*arr));
    if (temp == NULL)
    {
        printf("Memory is not allocated\n");
        free(arr); // Free original memory if resizing fails
        return 1;
    }
    arr = temp;

    // Fill only the new slots (indices 3, 4, 5)
    for (int i = 3; i < 6; i++)
    {
        *(arr + i) = 10 * (i + 1);
    }
    printf("\nAfter realloc: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *(arr + i));
    }
    free(arr);
    arr = NULL;
    return 0;
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
