/*Function Pointers in C
A function pointer is a variable that stores the address of a function. Just like a pointer can point to an int or char, it can also point to a function — and let you call that function through the pointer.

Why Use Function Pointers?
Pass functions as arguments to other functions
Build callback mechanisms
Create dispatch tables (like a switch, but cleaner)
Implement basic polymorphism in C
*/
#include <stdio.h>
#if 0
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*ptr)(int, int);
    ptr = add;
    printf("the addition = %d\n", ptr(10, 20));
    return 0;
}
#endif

#if 0
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int main()
{
    int (*ptr)(int, int);
    ptr = add;
    printf("the addition = %d\n", ptr(10, 20));
    ptr = sub;
    printf("the Subtraction = %d\n", ptr(10, 20));
    ptr = mul;
    printf("the Multiplication = %d\n", ptr(10, 20));
}

#endif

#if 0
// Array of Function Pointers
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int main()
{
    int (*ptr[3])(int, int) = {add, sub, mul};
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", ptr[i](20, 10));
    }
}

#endif

#if 0
//// Array of Function Pointers using switch
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int main()
{
    int (*ptr[3])(int, int) = {add, sub, mul};
    int a;
    int b;
    printf("Enter the a and b values: ");
    scanf("%d %d", &a, &b);
    printf("\n0.add\n1.sub\n2.mul\nChoose the operation:");
    int i;
    scanf("%d", &i);
    switch (i)
    {
    case 0:
        printf("The addition of elements: %d\n", ptr[i](a, b));
        break;
    case 1:
        printf("The Subtraction of elements: %d\n", ptr[i](a, b));
        break;
    case 2:
        printf("The Multiplication of elements: %d\n", ptr[i](a, b));
        break;
    default:
        printf("Invalied inputs ");
    }
}

#endif

#if 0
// call back example
#include <stdlib.h>
int condition(int a, int b)
{
    if (a > b)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
int absolute_compare(int a, int b)
{
    if (abs(a) > abs(b))
        return 1;
    else
        return -1;
}
void bubble_sorting(int *arr, int len, int (*condition)(int, int))
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if (condition(arr[j], arr[j + 1]) > 0)
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
int main()
{
    int len = 5;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before sorting: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    bubble_sorting(arr, len, absolute_compare);

    printf("\nAfter sorting: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}
#endif

#if 0
// Declare a function pointer `fp` that points to a function which takes **no arguments** and returns **void**. Assign it to a function called `greet` and call it.
void greet(void)
{
    printf("hello\n");
}
int main()
{
    void (*fp)(void);
    fp = greet;
    fp();
    return 0;
}
#endif

#if 0
/*Write a function `applyTwice(int x, int (*fn)(int))` that applies `fn` to `x` twice and returns the result. Test it with a function `double(int x)` that returns `x * 2`.
applyTwice(3, double) should print 12*/
int doubl(int x)
{
    return x * 2;
}
int applyTwice(int x, int (*fn)(int))
{
    return fn(fn(x));
}
int main()
{
    printf("%d\n", (applyTwice(3, doubl)));
}

#endif

#if 0
/***Q3.**Create an **array of 3 function pointers ** — each pointing to a function that takes one `int` and returns one `int`.Functions are `square`, `cube`, and `negate`.Loop through the array and call each with value `4`.
``` Expected : square(4) = 16
               cube(4) = 64
               negate(4) = -4*/
int square(int n)
{
    return n * n;
}
int cube(int n)
{
    return n * n * n;
}
int negate(int n)
{
    return -1 * n;
}

typedef int (*math_op)(int);

int main()
{
    math_op fp[3] = {square, cube, negate};
    const char *labels[] = {"square", "cube", "negate"};

    for (int i = 0; i < 3; i++)
    {
        printf("The %s of 4 is : %d\n", labels[i], fp[i](4));
    }
    return 0;
}
#endif

#if 0
/***Q4.** Write a function `operate(int a, int b, int(*fn)(int,int))` and pass `add`, `sub`, `mul` one by one. Print result each time.
```
Expected:
operate(8, 2, add) = 10
operate(8, 2, sub) = 6
operate(8, 2, mul) = 16*/
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int operate(int a, int b, int (*fn)(int, int))
{
    return fn(a, b);
}
int main()
{
    printf("Addition : %d\n", operate(8, 2, add));
    printf("SUB : %d\n", operate(8, 2, sub));
    printf("MUL : %d\n", operate(8, 2, mul));
}
#endif

#if 0
/***Q5.** Using typedef, define a type `Validator` for a function that takes an `int` and returns `int`. Write two validators — `isEven(int n)` and `isPositive(int n)`. Write a function `check(int n, Validator v)` that prints `"Pass"` or `"Fail"`.
```
Expected:
check(4,  isEven)    → Pass
check(3,  isEven)    → Fail
check(5,  isPositive)→ Pass
check(-1, isPositive)→ Fail*/

typedef int (*Validator)(int);

int isEven(int n)
{
    return (n % 2 == 0);
}

int isPositive(int n)
{
    return (n > 0);
}

void check(int n, Validator v)
{
    if (v(n))
        printf("Pass\n");
    else
        printf("Fail\n");
}

int main()
{
    check(4, isEven);
    check(3, isEven);
    check(5, isPositive);
    check(-1, isPositive);
    return 0;
}

#endif

#if 0
/***Q6.** Write a **dispatch table** using an array of function pointers for a simple calculator. Take operator as char input `(+, -, *, /)` and two numbers, find and call the right function.
```
Expected:
10 + 3 = 13
10 - 3 = 7
10 * 3 = 30
10 / 3 = 3*/

typedef int (*operation_ptr)(int, int);

int calc_add(int a, int b) { return a + b; }
int calc_sub(int a, int b) { return a - b; }
int calc_mul(int a, int b) { return a * b; }
int calc_div(int a, int b) { return (b != 0) ? (a / b) : 0; }

int main()
{
    char ops_chars[] = {'+', '-', '*', '/'};
    operation_ptr dispatch_table[] = {calc_add, calc_sub, calc_mul, calc_div};
    
    int a = 10, b = 3;
    char input_op;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &input_op);

    int op_index = -1;
    // Map the character to an array index
    for (int i = 0; i < 4; i++) {
        if (ops_chars[i] == input_op) {
            op_index = i;
            break;
        }
    }

    if (op_index != -1) {
        // The "Magic" line: Calling the function at the specific index
        int result = dispatch_table[op_index](a, b);
        printf("%d %c %d = %d\n", a, input_op, b, result);
    } else {
        printf("Invalid operator!\n");
    }

    return 0;
}
#endif

#if 0
/***Q7.** Write a function `sortWith(int *arr, int n, int(*cmp)(int,int))` that sorts an array using bubble sort. Pass two comparators — one for **ascending**, one for **descending**.
```
Expected:
Ascending  : 1 2 3 4 5
Descending : 5 4 3 2 1*/
int compare(int a, int b)
{
    if (a > b)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void assending(int *arr, int len, int (*fp)(int, int))
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if ((fp(arr[j], arr[j + 1])) > 0)
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
int main()
{
    int arr[5] = {3, 5, 2, 7, 1};
    printf("\nBefore sorting: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    assending(arr, 5, compare);
    printf("\nAfter sorting: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
#endif

#if 0
#include <stdio.h>
void sayhello()
{
    printf("Hello world\n");
}
int main()
{
    void (*fptr)() = sayhello;
    fptr();
    return 0;
}
#endif

#if 0
#include <stdio.h>
void square(int x)
{
    printf("The square: %d\n", x * x);
}
void cube(int x)
{
    printf("The cube: %d\n", x * x * x);
}
int main()
{
    void (*fptr)(int);
    fptr = square;
    fptr(5);
    fptr = cube;
    fptr(3);
    return 0;
}

#endif

#if 1
int add()
{
}
int sub()
{
}
int mul()
{
}
int main()
{
    int (*fptr[3])(int, int) = {add, sub, mul};
    for(){
        
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
