#include <stdio.h>
#if 0
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr; // p points to arr[0]

    // Both loops print the same thing:
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]); // index notation

    for (int i = 0; i < 5; i++)
        printf("%d ", *(arr + i)); // pointer notation

    // Walking with the pointer itself:
    for (int *p = arr; p < arr + 5; p++)
        printf("%d ", *p);
}
#endif

#if 0
#include <stdio.h>
int main()
{
    int x;
    int *ptr;
    x = 5;
    ptr = &x;
    return 0;
}

#endif

#if 0
#include <stdio.h>
int main()
{
    int number = 10;
    int *ptr;
    ptr = &number;
    printf("Address of number is % p\n", &number);
    printf("ptr contains % p\n", ptr);
    return 0;
}

#endif

#if 0
#include <stdio.h>
int main()
{
    int number = 10;
    int *ptr;
    ptr = &number;
    printf("number contains % d\n", number);
    printf("* ptr contains % d\n", *ptr);
    return 0;
}

#endif

#if 0
#include <stdio.h>
int main()
{
    int number = 10;
    int *ptr;
    ptr = &number;
    *ptr = 100;
    printf("number contains % d\n", number);
    printf("* ptr contains % d\n", *ptr);
    return 0;
}

#endif

#if 0
#include <stdio.h>
int main()
{
    int x = 100;
    int *p = &x;
    *p = 200; // modifing value through dereferencing.
    printf("%d\n", x);
    return 0;
}

#endif

#if 0
#include <stdio.h>
int main()
{
    int x;
    int *p = &x;
    *p = 50;
    printf("%d\n", *p);
    return 0;
}

#endif

#if 0
#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    int *p = &a;
    p = &b;
    printf("%d\n", *p);
    *p = 99;
    printf("%d\n", b);
    return 0;
}

#endif

#if 0
// Q4. Write a function swap(int *a, int *b) that swaps two integers. Call it in main() and print the values before and after.
// Pass by reference.
void swap(int *a, int *b);
int main()
{
    int a = 10;
    int b = 20;
    printf("Before Swaping:\na = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("After Swaping:\na = %d\nb = %d\n", a, b);
}
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
#endif

#if 0
#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;// p pointes to the first element of the array(arr[0]) which is 10.
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 4));
    p++;//P is incremented p pointes to the secode element of arrray (arr[1]), which is 20.
    printf("%d\n", *p);
    printf("%d\n", p[2]);//which is same as *(p + 2).
    return 0;
}

#endif

#if 0
// Q6. Write a function int sumArray(int *arr, int n) that takes a pointer to an array and its size, and returns the sum of all elements. Use pointer arithmetic (no [] indexing allowed inside the function).
#include <stdio.h>
int sumArray(int *arr, int n);
int main()
{
    int arr[5] = {5, 4, 2, 6, 2};
    int sum = sumArray(arr, 5);
    printf("The Sum of Array Elements are: %d\n", sum);
}
int sumArray(int *arr, int n)
{
    int s = 0;
    for (int i = 0; i < 5; i++)
    {
        s = s + *(arr + i);//Used Pointer Arithmatic 
    }
    return s;
}
#endif

#if 0
#include <stdio.h>
int main()
{
    int x = 42;
    int *p = &x;
    int **pp = &p;
    **pp = 100;
    printf("%d %d %d\n", x, *p, **pp);
    return 0;
}

#endif

#if 0
// Q8.Write a program using malloc to dynamically create an array of n integers(take n from the user), fill it with values 1 to n, print it, then free the memory.Include a NULL check.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("The size of array : ");
    scanf("%d", &n);
    int *arr;
    arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("ERROR: Memory is not Allocated\n");
        return 1;
    }
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
        // scanf("%d", &arr[i]);
    }
    printf("The array values are this : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    free(arr);
}
#endif

#if 0
// Q9. Find and fix all the bugs in this program:
#include <stdio.h>
#include <stdlib.h>

int allocate(int **ptr, int size)
{
    *ptr = malloc(size * sizeof(int));
    if (*ptr == NULL)
    {
        printf("Error: Memory is not allocated..");
        return 1;
    }
    return 0;
}

int main()
{
    int *arr = NULL; // This prevents wild ptr, and stores in stack because local ptr var and 8 bytes size based on 64bit OS.
    if (allocate(&arr, 5) != 0)
    {
        // If allocation failed, we must stop here
        return 1;
    }

    for (int i = 0; i < 5; i++)
        arr[i] = i + 1;
    printf("%d\n", arr[0]);
    free(arr);
    return 0;
}
#endif

#if 0
// Q10. Write a function void reverseArray(int *arr, int n) that reverses an array in place using only pointer arithmetic — no index notation, no extra array.
#include <stdio.h>
void reverseArray(int *arr, int n);
int main()
{
    int n;
    printf("Enter the size of arr: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Array Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    reverseArray(arr, n);

    printf("\nAfter reversing the array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return 0;
}
void reverseArray(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int t = *(arr + i);
        *(arr + i) = *((arr + n) - 1 - i);
        *((arr + n) - 1 - i) = t;
    }
}

#endif

#if 0
int main()
{
    int x = 10;
    int *p = &x;
    *p = 20;
    printf("%d\n", x);
    printf("%d\n", *p);
    printf("%d\n", p == &x); // what does this print?
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>
// Find the bug and fix it. What is wrong and why will it crash?
int main()
{
    /* int *p;  // the pointer p is allocated on the stack, but it isn't given a starting value. It contains "garbage"
     *p = 42; // you are telling the CPU to "go to this random address and write the number 42." Since your program does not have permission to write to that random memory location, the Operating System steps in and kills the process to protect system stability. This results in the Segmentation Fault (crash) you see.
     printf("%d\n", *p);
     return 0;
     // Pointing it to an existing variable.
     // Allocating memory dynamically using malloc.*/

    /*int *p;
    p = malloc(sizeof(int));
    if (p == NULL)
    {
        printf("Error: Memory allocation failed\n");
        return 1;
    }
    *p = 42;
    printf("%d\n", *p);
    free(p); // Release the memory back to the system
    return 0;*/
}
#endif

#if 0
// What is the output ? Trace through each line carefully.
int main()
{
    int arr[] = {5, 10, 15, 20}; // An array named arr is created on the stack with 4 integers.
    int *p = arr;                // storing the memory address of arr[0] into the pointer variable p.p points to element - 5.
    printf("%d\n", *p);
    printf("%d\n", *(p + 2));
    printf("%d\n", p[3]);
    p++;
    printf("%d\n", *p);
    return 0;
}

#endif

#if 0
#include <stdio.h>
// What is the output ? Why are str1 and str2 different in how they behave ?
int main()
{
    char str1[] = "Hello"; // Storage Location: The Stack.
    char *str2 = "Hello";  // Storage Location: str2 stors in stack and  "Hello"-> string literal or Pointer to Literal stors in heap and locked .
    // const char *str2 = "Hello";
    // Use 'const' because literals are read-only.const because -> Catching Bugs at Compile-Time.
    // As you saw in the last exercise, trying to modify a string literal like char *str2 = "Hello"; causes a Segmentation Fault at runtime. Runtime crashes are the hardest and most expensive bugs to find.

    str1[0] = 'J';
    printf("%s\n", str1);

    str2[0] = 'J'; // ← what would happen if you uncomment this ? segmentation fault
    printf("%s\n", str2);
    return 0;
}

#endif

#if 1
// Write the function. Fill in the blank so that main() prints: a=7 b=3
//  Write this function:
void swap(/* your parameters */)
{
    /* your code */
}

int main()
{
    int a = 3, b = 7;
    swap(/* your call */);
    printf("a=%d  b=%d\n", a, b);
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

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif
