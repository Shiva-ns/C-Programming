/*Function Pointers in C
A function pointer is a variable that stores the address of a function. Just like a pointer can point to an int or char, it can also point to a function — and let you call that function through the pointer.

Why Use Function Pointers?
Pass functions as arguments to other functions
Build callback mechanisms
Create dispatch tables (like a switch, but cleaner)
Implement basic polymorphism in C
*/
#if 0
#include <stdio.h>
int add(int a, int b)
{
    printf("addition : %d\n", a + b);
}
int sub(int a, int b)
{
    printf("Subtraction : %d\n", a - b);
}
int main()
{
    int (*ptr)(int add, int sub);
}
#endif
