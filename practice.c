#if 0
// Write a function add(int a, int b) and call it using a function pointer.
#include <stdio.h>
#include <string.h>
#include <stdint.h>
int add(uint16_t a, uint16_t b)
{
    printf("The addition of 2 variables: %d\n", a + b);
}
int main()
{
    uint16_t a;
    uint16_t b;
    int (*fptr)(uint16_t, uint16_t);
    fptr = add;
    fptr(10, 20);
    return 0;
}
#endif

#if 0
// Write two functions square(int x) and cube(int x). Store both in function pointers and call them.
#include <stdio.h>
#include <stdint.h>
int square(uint16_t s)
{
    printf("The %d squar is = %d\n", s, s * s);
}
int cube(uint16_t c)
{
    printf("The %d Cube is = %d\n", c, c * c * c);
}
int main()
{
    int (*f)(uint16_t);
    f = square;
    (*f)(5);//here *f -> dereference the f and calling the function
    f = cube;
    f(5);
}

#endif

#if 0
// Write a function greet(char *name) and call it through a function pointer.
#include <stdio.h>
int greet(char *name)
{
    printf("%s\n", name);
}
int main()
{
    int (*f)(char *);
    f = greet;
    f("Hi good morning...");
}

#endif

#if 0
// Write a function apply(int x, int (*fn)(int)) that takes a number and a function pointer, and prints the result. Test it with double_it and negate functions.
#include <stdio.h>
#include <stdint.h>
int double_it(int d)
{
    return 5 * 2;
}
int negate(int n)
{
    return -n;
}
int applay(int x, int (*fn)(int))
{

    return fn(x);
}
int main()
{
    printf("double =%d\n", applay(5, double_it));
    printf("Negate =%d\n", applay(5, negate));
}
#endif

#if 0
// Write int operate(int a, int b, int (*op)(int,int)) and pass add, sub, mul to it one by one.
#include <stdio.h>
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
    return a / b;
}

int operate(int a, int b, int (*op)(int, int))
{
    return (*op)(a, b);
}
int main()
{
    printf("The addition:%d\n", operate(5, 10, add));
    printf("The Subtraction:%d\n", operate(5, 10, sub));
    printf("The Multiplication:%d\n", operate(15, 10, mul));
}

#endif

#if 0
// Create an array of 4 function pointers {add, sub, mul, dvd} and call each one using a loop with a=10, b=2.
#include <stdio.h>

#include <stdio.h>
int add(int a, int b)
{
    printf("The addition: %d\n", a + b);
}
int sub(int a, int b)
{
    printf("The sub: %d\n", a - b);
}
int mul(int a, int b)
{
    printf("The mul: %d\n", a * b);
}
int div(int a, int b)
{
    printf("The dvd: %d\n", a / b);
}

int main()
{
    int (*op[4])(int, int) = {add, sub, mul, div};
    for (int i = 0; i < 4; i++)
    {
        op[i](10, 5);
    }
}

#endif

#if 0
// Use typedef to define MathFn, then redo question 6 using the typedef — cleaner version.
#include <stdio.h>
typedef void (*MathFn)(int, int);

void add(int a, int b)
{
    printf("The addition: %d\n", a + b);
}
void sub(int a, int b)
{
    printf("The sub: %d\n", a - b);
}
void mul(int a, int b)
{
    printf("The mul: %d\n", a * b);
}
void dvd(int a, int b)
{
    printf("The dvd: %d\n", a / b);
}

int main()
{
    MathFn op[4] = {add, sub, mul, dvd};
    for (int i = 0; i < 4; i++)
    {
        op[i](10, 5);
    }
}

#endif

#if 0
// Write your own my_map(int *arr, int n, int (*fn)(int)) that applies a function to every element of an array. Test with square and double_it.
#include <stdio.h>
int arr1[5];
int double_it(int x)
{
    return x + x;
}

int square(int x)
{
    return x * x;
}

int my_map(int *arr, int n, int (*fn)(int))
{

    for (int i = 0; i < 5; i++)
    {
        arr1[i] = fn(arr[i]);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    my_map(arr, 5, double_it);
    printf("The double out put : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }

    my_map(arr, 5, square);
    printf("\nThe square out put : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
}

#endif

#if 1
//Create a Calculator struct with four function pointer members (add, sub, mul, dvd). Initialize them and use the struct to perform all four operations.

int main(){
    
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

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif
