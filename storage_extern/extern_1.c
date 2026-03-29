#include <stdio.h>

/*To make this work, you cannot compile just one file. You must compile all of them together and link them into a single executable.

Using your MinGW/GCC setup, the command would look like this:
[gcc extern_1.c extern_2.c exter_3.c -o myprogram.exe
./myprogram.exe]
*/
/*How It Works
1.Definition vs. Declaration:
extern_1.c (The Owner): You wrote int num;. This is the Definition. The compiler allocates memory for num here. By default, global variables have external linkage, meaning other files can "see" them if they ask.
extern_2.c & exter_3.c (The Borrowers): You wrote extern int num;. This is a Declaration. It tells the compiler: "I don't have a variable named num, but I know it exists in another file. Please link me to it."

2.Execution Flow:
The program starts in main() inside extern_1.c.
num++: It increments the global variable num (e.g., 0 -> 1).
func_1(): Calls the function in extern_2.c. That function looks at the same memory location for num and prints "1".
func_2(): Calls the function in exter_3.c. That function also looks at the same num and prints "1".
The loop repeats, incrementing num to 2, and both functions print "2".*/
#if 0
#include <unistd.h> // Required for sleep() function
int num;

// Function Prototypes: Tell main() that these functions exist elsewhere
int func_1();
int func_2();

int main()
{
    while (1)
    {
        num++;
        func_1();
        sleep(1);
        func_2();
        sleep(1);
    }
    return 0;
}
#endif

#if 0
#include <unistd.h>
/*use this command's : gcc extern_1.c extern_2.c -o myprogram.exe
                 ./myprogram.exe*/
     
int func_1();
int num;
int main()
{
    while (1)
    {
        num++;
        func_1();
        sleep(1);
    }
    return 0;
}

#endif

#if 0
#include <stdio.h>
#include <unistd.h>
int func_1();
int num;
int main()
{
    while (1)
    {
        num++;
        func_1();
        sleep(1);
    }
    return 0;
}

#endif

#if 0
#include <stdio.h>
#include <unistd.h>
int func_1();
int num;
int main()
{
    while (1)
    {
        num++;
        func_1();
        sleep(1);
    }
    return 0;
}

#endif

#if 0
#include <unistd.h>
#include <stdio.h>
int func_1();
int num;
int main()
{
    while (1)
    {
        num++;
        func_1();
        sleep(1);
    }
    return 0;
}

#endif

#if 0
#include <stdio.h>
int main()
{
    int x;
    {
        int x = 10;
        {
            extern int x;//which force to get the data from global becauase used extern looks for the file-scope definition
            printf("x % d\n", x);
        }
        printf("x % d\n", x);
    }
    printf("x % d\n", x);
    return 0;
}
int x = 20;

#endif

#if 0
#if 0
#include <stdio.h>
int main()
{
    extern char x; // Main issue: type mismatch between extern char x; and int x = 0x31; → same name, different types → compile‑time error or undefined behavior.
    printf("x % c\n", x);
    return 0;
}
int x = 0x31;
#endif

#if 0
// corrected
#include <stdio.h>

extern int x; // or just rely on implicit external linkage for the definition below

int main()
{
    printf("x = %c (%d)\n", (char)x, x); // explicitly cast to char
    return 0;
}

int x = 0x31;
#endif

#endif

#if 0
#include <stdio.h>
int main()
{
    int x;
    {
        int x = 10;
        {
            extern int x = 20;
            /*Cannot combine extern with an initializer inside a block
extern int x = 20; inside the inner block is not allowed in standard C.

The C standard says that when extern is used in block scope, it can only be a declaration, not a definition.

Writing extern int x = 20; means:

extern → don’t allocate storage, just declare,

= 20 → initialize, i.e., define → conflict.*/
            printf("x % d\n", x);
        }
        printf("x % d\n", x);
    }
    printf("x % d\n", x);
    return 0;
}
int x;

#endif

#if 0
#include <stdio.h>
int num;
int func_1();
int main()
{
    while (1)
    {
        num++;
        func_1();
    }
    return 0;
}

#endif

#if 0
#include <stdio.h>
int num;
int func_2();
int main()
{
    while (1)
    {
        num++;
        func_2();
    }
    return 0;
}

#endif

#if 0
#include <stdio.h>
#include <unistd.h>
int num;
int func_1();
int main()
{
    while (1)
    {
        num++;
        func_1();
        sleep(1);
    }
    return 0;
}

#endif

#if 0
File 2:
static int num;   // internal linkage (private to File 2)
int num;          // external linkage (visible across files)

#endif

#if 0
#include <stdio.h>
int x = 20;
int main()
{
    int x;
    {
        int x = 10;
        {
            extern int x;
            printf("x % d\n", x);
        }
        printf("x % d\n", x);
    }
    printf("x % d\n", x);
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
