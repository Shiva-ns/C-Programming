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

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif
