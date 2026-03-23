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

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif
