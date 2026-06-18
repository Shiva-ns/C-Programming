// function pointer

#if 0
#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    typedef int (*fptr)(int, int);
    fptr fp = add;
    printf("The output : %d\n", fp(5, 10));
    return 0;
}

#endif

#if 0
#include <stdio.h>
int sub(int a, int b)
{
    return a - b;
}
int main()
{
    typedef int (*fptr)(int, int);
    fptr fp = sub;
    printf("The output : %d\n", fp(15, 10));
    return 0;
}

#endif

#if 0
#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int main()
{
    typedef int (*fptr)(int, int);
    fptr fp = NULL;
    fp = add;
    printf("the addition : %d\n", fp(15, 20));
    fp = sub;
    printf("The Subtraction : %d\n", fp(20, 15));
    return 0;
}

#endif

#if 0
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
    return a * b;
}
int main()
{
    typedef int (*fptr)(int, int);
    fptr fp1 = NULL;
    fptr fp2 = NULL;
    fptr fp3 = NULL;
    fp1 = add;
    fp2 = sub;
    fp3 = mul;
    printf("The addition : %d\n", fp1(20, 15));
    printf("the subtraction : %d\n", fp2(30, 20));
    printf("the multiplication : %d\n", fp3(5, 2));
    return 0;
}

#endif

#if 0
#include <stdio.h>
int add(int a, int b)
{
    printf("Addition: ");
    return a + b;
}
int sub(int a, int b)
{
    printf("Subtraction: ");
    return a - b;
}
int mul(int a, int b)
{
    printf("Multiplication: ");
    return a * b;
}
int main()
{
    typedef int (*fptr)(int, int);
    fptr fp[3] = {add, sub, mul};
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", fp[i](20, 10));
    }

    return 0;
}

#endif

#if 0
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

    return a * b;
}
int main()
{
    typedef int (*fptr)(int, int);
    fptr fp[3] = {add, sub, mul};
    const char *operat[3] = {"Addition", "Subtraction", "Multiplication"};
    for (int i = 0; i < 3; i++)
    {
        printf("%s: %d\n", *(operat + i), fp[i](20, 10));
    }

    return 0;
}

#endif

#if 1
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

    return a * b;
}
int divi(int a, int b)
{
    if (b == 0)
    {
        printf("Division by zero is not allowed\n");
        return 0;
    }
    return (float)a / b;
}
int main(int argc, char *argv[])
{
    int a, b;
    char op;
    float (*fptr)(int, int) = NULL;
    if (argc != 2)
    {
        printf("Usage: ./a.out \"num1 op num2\"\n");
        printf("Example: ./a.out \"20 + 10\"\n");
        return 1;
    }
    if (sscanf(argv[1], "%d %c %d", &a, &op, &b) != 3)
    {
        printf("Invalid input format\n");
        printf("Example: ./a.out \"20 + 10\"\n");
        return 1;
    }
    switch (op)
    {
    case '+':
        fptr = add;
        break;
    case '-':
        fptr = sub;
        break;
    case '*':
        fptr = mul;
        break;
    case '/':
        fptr = divi;
        break;
    default:
        printf("Unknown operator\n");
        return 1;
    }
    printf("Result: %.2f\n", fptr(a, b));
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
