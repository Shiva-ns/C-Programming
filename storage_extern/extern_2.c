#include <stdio.h>

#if 0
#include <stdio.h>
extern int num;
int func_1()
{
    printf("num is % d from file2\n", num);
    return 0;
}
#endif

#if 0
#include <stdio.h> // Required for printf
extern int num;
extern int num; // redundent doe compiler ignores this second one
int func_1()
{
    printf("num is %d from file2\n", num);
    return 0;
}

#endif

#if 0
#include <stdio.h>
static int num;
extern int num; // it will sees the above static and linkes the internal it wont check previouse one.

int func_1()
{
    printf("num is % d from file2\n", num);
    return 0;
}

#endif

#if 0
#include <stdio.h>
// extern char num;
/*The linker connects both variables to the exact same memory address.
 However, when extern_2.c tries to read num, it only looks at the first byte of that 4-byte integer.
 Result: The value printed will be incorrect for numbers larger than 255.
 If num is 256 (binary ...0001 00000000), extern_2.c will read the last 8 bits (all zeros) and think the value is 0.*/

extern int num; // Must match the 'int' type defined in extern_1.c
int func_1()
{

    printf("num is %d from file2\n", num);
    return 0;
}

#endif

#if 0
#include <stdio.h>
extern int num;
/*extern char num; compilation error due to conflicting type declarations for the global variable num. */
int func_1()
{
    printf("num is % d from file2\n", num);
    return 0;
}

#endif

#if 0
#include <stdio.h>
extern int num;
static int func_2()
{
    /*By declaring static int func_2(), you are telling the compiler that this function should only be visible within extern_2.c.
It cannot be called directly from extern_1.c or any other file. If you tried to call func_2() from main() in another file, the linker would report an "undefined reference" error because func_2 is hidden.*/

    printf("num is % d from file2\n", num);
    return 0;
}
int func_1()
{
    func_2();
    return 0;
}

#endif

#if 0
#include <stdio.h>
extern int num;
static int func_2() // Link error because scop is inside code not outside
{
    printf("num is % d from file2\n", num);
    return 0;
}
int func_1()
{
    func_2();
    return 0;
}

#endif

#if 0
#include <stdio.h>
extern int num;
int num;//re-defined error in file one aswell here both int num 
int func_1()
{
    printf("num is % d from file2\n", num);
    return 0;
}

#endif

#if 0
File 2:
static int num;   // internal linkage (private to File 2)
int num;          // external linkage (visible across files)

#endif

#if 0

#endif
