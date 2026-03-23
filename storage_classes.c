#include <stdio.h>
#if 0
#include <stdio.h>
int main()
{
    int i = 0;
    printf("i % d\n", i);
    return 0;
}

#endif

#if 0
int main()
{
    auto int i = 0;
    printf("i % d\n", i);
    return 0;
}
#endif

#if 0
#include <stdio.h>
int foo()
{
    int i = 0;
    printf("i % d\n", i);
    return 0;
}
int main()
{
    foo();
    return 0;
}

#endif

#if 0
int *foo()
{
    int i = 10;
    int *j = &i;
    return j;
}
int main()
{
    int *i;
    i = foo();
    printf("*i %d\n", *i);
    return 0;
}

#endif

#if 0

char *foo()
{
    // 'ca' is 'auto' by default. It exists only while foo() is running.
    char ca[12] = "Hello World"; 
    
    return ca; // BUG: Returning address of local stack memory (Dangling Pointer)
}
int main()
{
    char *ca;
    ca = foo();
    printf("ca is % s\n", ca);
    printf("ca is %s\n", ca); // Removing space in %s format specifier
    return 0;
}

#endif

#if 0
char *foo() /* Why [char *foo() ]it's needed here: In C, strings are not a primitive type like int or char. They are arrays of characters. When you return an array like ca, you are actually returning the memory address of the first character (&ca[0]).
Use char when returning a single letter: return 'A';
Use char * when returning a string (array): return "Hello";*/

{
    // 'static' stores this variable in the Data Segment, not the Stack.
    // Its memory remains valid for the entire program execution.
    static char ca[12] = "Hello World";

    return ca;
}
int main()
{
    char *ca;
    ca = foo();
    printf("ca is %s\n", ca);
    return 0;
}

#endif

#if 0
int book_ticket()
{
    int ticket_sold = 0;
    // static: stored in Data Segment. Initialized only once.
    // The variable and its value survive even after function returns.
    static int ticket_sold = 0;
    ticket_sold++;
    return ticket_sold;
}
int main()
{
    int count;
    count = book_ticket();
    count = book_ticket();
    printf("Sold % d\n", count);
    return 0;
}
#endif

#if 0
int main()
{
    int i = 0;
    {
        // Block scope: variables declared inside {} exist only inside {}
        static int j = 0;
        printf("i %d\n", i); // Valid: outer variable 'i' is visible here
    }
    printf("j %d\n", j); // ERROR: 'j' is undeclared here. It died at the '}' above.
    return 0;
}

#endif

#if 0
int main()
{
    int j = 10;
    {
        int j = 0; // Shadows the outer 'j'
        printf("Inner j: %d\n", j); // Prints 0
    }
    printf("Outer j: %d\n", j); // Prints 10 (Outer j was unaffected)
    return 0;
}

#endif

#if 0
int main()
{
    int i = 10;
    // int i = 20; // ERROR: Redeclaration of 'i' in the same scope.
    i = 20;        // Correct way to update the value of the existing 'i'.
    
    {
        printf("i %d\n", i);
    }
    printf("i %d\n", i);
    return 0;
}

#endif

#if 0
int main()
{
    register int i = 10;
    // scanf("% d", &i); // ERROR: Cannot take the address (&) of a register variable
    printf("i %d\n", i);
    return 0;
}

#endif

#if 1
/*int main()
{
    register int i = 10;
    register int *j = &i;
    printf("* j % d\n", *j);
    int i = 10; // Must be in RAM (auto) to have an address

    // It is valid to store the *pointer itself* in a register
    register int *j = &i;
    printf("*j %d\n", *j);
    return 0;
}*/

/*
int main()
{
    int i = 10;
    register int *j = &i;
    printf("%d", *j);
}*/

#endif

#if 0
int main()
{
    int i = 10;
    register int *j = &i;
    printf("* j % d\n", *j);
    return 0;
}
#endif

#if 0
int *foo()
{
    static int i = 10;
    int *j = &i;
    return j;
}
int main()
{
    int *i;
    i = foo();
    printf("The value from the returned pointer is: %d\n", *i);
    return 0;
}

#endif

#if 0
char *foo()
{
    static char ca[12] = "Hello World";//this stores in permanent memory (data segment) it is scop is entaire program.
    return ca;
}
int main()
{
    char *ca;
    ca = foo();
    printf("ca is % s\n", ca);
    return 0;
}

#endif

#if 0
int book_ticket()
{
    // INITIALIZATION: Happens only ONCE at program startup (before main).
    // The line below is NOT executed as an assignment every time the function runs.
    static int ticket_sold = 0; 
    ticket_sold++;
    return ticket_sold;
}
int main()
{
    int count;
    count = book_ticket(); // Returns 1
    count = book_ticket(); // Returns 2 (remembers previous value)
    printf("Sold %d\n", count);
    return 0;
}

#endif

#if 0
int main()
{
    static int i = 5;
    if (--i)
    {
        // printf("hi");
        main();
    }
    printf("i % d\n", i);
    return 0;
}

#endif

#if 0
int main()
{
    static int i = 5;
    if (--i)
    {
        return main(); // The return statement exits the function immediately after the recursive call returns.
                       // Therefore, the code below is skipped for all calls except the base case.
    }
    // This runs only once, when i becomes 0 (the base case)
    printf("i %d\n", i);
    return 0;
}

#endif

#if 0
int foo()
{
    static int i;
    return i;
}
int main()
{
    // static int x = foo(); // ERROR: Static vars need compile-time constants. foo() is run-time.
    
    // FIX: Use 'auto' (default) variable. It is created at runtime, so it can accept function returns.
    int x = foo();           
    printf("x %d\n", x);
    return 0;
}

#endif

#if 0
int *foo()
{
    static int i = 10;
    int *j = &i;
    return j;
}
int main()
{
    int *i;
    i = foo();
    printf("* i % d\n", *i);
    return 0;
}

#endif

#if 0
int *foo()
{
    // ERROR: Cannot initialize static 'j' with address of auto 'i'.
    // Also, 'i' would be destroyed upon return.

    static int i = 10; // FIX: Make 'i' static so it persists and has a constant address.
    return &i;
}
int main()
{
    int *i;
    i = foo();
    printf("*i %d\n", *i);
    return 0;
}

#endif

#if 0
int x;
int foo()
{
    printf("x % d\n", x);
    return ++x;
}
int main()
{
    foo();
    printf("x % d\n", x);
    return 0;
}

#endif

#if 0
// auto int x; // ERROR: 'auto' is only for local variables (inside functions).
int x;         // Correct: Global variable (Defaults to 0, stored in Data Segment).
int foo()
{
    printf("x % d\n", x);
    return ++x;
}
int main()
{
    foo();
    printf("x % d\n", x);
    return 0;
}

#endif

#if 0 // register int x; // ERROR: 'register' is not allowed for global variables.
int x; // FIX: Use standard global variable (stored in Data Segment).
int foo()
{
    printf("x % d\n", x);
    return ++x;
}
int main()
{
    foo();
    printf("x % d\n", x);
    return 0;
}

#endif

#if 0
int x = 10;//global
int foo()
{
    printf("x % d\n", x);
    return 0;
}
int main()
{
    foo();
    return 0;
}

#endif

#if 0
int x = 10;
int x; // This is a redundant declaration. While valid C, it is confusing and should be removed.
int foo()
{
    printf("x %d\n", x);
    return 0;
}
int main()
{
    foo();
    return 0;
}

#endif

#if 0
int x = 10;
int x = 20; // redefinition compiler error
int foo()
{
    printf("x % d\n", x);
    return 0;
}
int main()
{
    foo();
    return 0;
}

#endif

#if 1
// None Linkage – Local variables have “none” linkage
/*External Linkage – A global variable declared without storage class has “external” linkage
● Internal Linkage – A global variable declared with static storage class has “internal” linkage*/

#endif

#if 0
static int x = 10;
int foo()
{
    printf("x % d\n", x);
    x++;
    return 0;
}
int main()
{
    foo();
    foo();
    return 0;
}

#endif

#if 1
static int x = 10;
// int x; // ERROR: Conflicting linkage. 'static' is Internal, 'int x' implies External.
int foo()
{
    printf("x %d\n", x);
    return 0;
}
int main()
{
    foo();
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
