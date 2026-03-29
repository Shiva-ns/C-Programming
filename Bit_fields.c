#if 0
Bit fields are a powerful feature in C that allow you to specify exactly how many bits a structure member should occupy. This is incredibly useful in memory-constrained environments, such as embedded systems, or when interfacing directly with hardware registers or network protocols where every bit counts.

Key Concepts of Bit Fields
Memory Efficiency: Instead of using a full int (typically 32 bits) to store a simple true/false flag or a small range of numbers, you can allocate just 1 or 2 bits.
Syntax: You define them inside a struct using the colon syntax: type member_name : width;.
Limitations:
You cannot take the address of a bit field using the & operator (because addresses point to bytes, not individual bits).
You cannot create an array of bit fields.
The alignment and "packing" of bits are implementation-defined, meaning different compilers might arrange them differently in memory.
#endif

#include <stdio.h>
#if 0
struct bits
{
    unsigned int num : 2;
    unsigned int num2 : 3;
};
int main()
{
    struct bits fields;
    // 2 bits can hold 0-3. Assigning 4 (binary 100) causes overflow/truncation to 0.
    fields.num = 3;

    // 3 bits can hold 0-7.
    fields.num2 = 7;
    printf("num (2 bits) = %u\nnum2 (3 bits) = %u\n", fields.num, fields.num2);
}
#endif

#if 0
struct Nibble
{
    unsigned char lower : 4;
    unsigned char upper : 4;
};
int main()
{
    struct Nibble nibble = {0x02, 0x0A};
    /* lower is initialized to 0x02 (Binary: 0010, Decimal: 2).
       upper is initialized to 0x0A (Binary: 1010, Decimal: 10).*/
    printf("% #o\n", nibble.upper);
    printf("% #x\n", nibble.lower);
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
