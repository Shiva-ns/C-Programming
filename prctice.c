#include <stdio.h>
#if 0
// check set bits in given numbers
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int i = 31;
    int c = 0;
    while (i >= 0)
    {
        if (num & (1 << i))
        {
            c++;
        }
        i--;
    }
    printf("The number of set bits in given val is : %d\n", c);
}

#endif

#if 0
// check set bits in given numbers using macro
/* Added parentheses around arguments to prevent precedence issues */
#define CHECK_BIT(num, i) ((num) & (1 << (i)))
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int i = 31;
    int c = 0;
    while (i >= 0)
    {
        if (CHECK_BIT(num, i))
        {
            c++;
        }
        i--;
    }
    printf("The number of set bits in given val is : %d\n", c);
}

#endif

#if 0
// set 3rd bit in the number
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int set_the_bit = (num | (1 << 2));
    printf("After setting that bit : %d\n", set_the_bit);
}

#endif

#if 0
/*Clear the 2nd bit of a number.
Input:  num = 7
Output: 5*/
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int clear_bit = (num & (~(1 << 1)));
    printf("After clearing the bit: %d\n", clear_bit);
}
#endif

#if 0
/*Check if the 4th bit is set.
Example:
Input: num = 16
Output: Bit is set*/
int main()
{
    int num = 16;

    if ((num & (1 << 4)))
    {
        printf("Bit 4 is set\n");
    }
    else
    {
        printf("Bit 4 is not set\n");
    }

    return 0;
}
#endif

#if 0
/*Toggle the bit at index 3 (the 4th bit)
Input: num = 8
Output: 0
*/
int main()
{
    int num = 8;
    // printf("Enter the number : ");
    // scanf("%d", &num);
    int toggle = (num ^ (1 << 3));
    printf("After toggeling the bit: %d\n", toggle);
    return 0;
}

#endif

#if 0
// Reverse the bits of a 32-bit unsigned integer
int main()
{
    unsigned int num;
    printf("Enter the number: ");
    scanf("%u", &num);

    unsigned int res = 0;
    for (int i = 0; i < 32; i++)
    {
        res = (res << 1) | (num & 1);
        num = num >> 1;
    }
    printf("After reverse of number: %u\n", res);
}

#endif

#if 0
// Clear the lowest set bit of a number.
int main()
{
    int num = 8;
    printf("Enter the number : ");
    scanf("%d", &num);
    int i = 0;
    while (i <= 31)
    {
        if (num & (1 << i))
        {
            num = (num & (~(1 << i)));
            break;
        }
        i++;
    }
    printf("After Clearing the lowest set bit of a number : %d\n", num);
}
#endif

#if 0
// WAP to get 'n' bits of a given number
int main()
{
    int num;
    int n;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Enter the n bits: ");
    scanf("%d", &n);
    printf("The n bits of given number is : %d\n", (num & ((1 << n) - 1)));
}

#endif

#if 0
// WAP to toggle 'n' bits of a given number
int main()
{
    unsigned int num;
    int n;
    printf("Enter  the num:");
    scanf("%d", &num);
    printf("Enter the n :");
    scanf("%d", &n);
    printf("toggled n bits of given number is : %u\n", (num ^ ((1 << n) - 1)));
}

#endif

#if 0
#include <stdint.h>

int main()
{
    // Using uint32_t for fixed-width (essential for registers)
    // Adding volatile tells the compiler the hardware can change this value
    volatile uint32_t num; 
    int n;
    uint32_t val;

    printf("Enter the num: ");
    scanf("%u", &num);
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("Enter the val: ");
    scanf("%u", &val);
    printf("After replaced 'n' bits of a given number :  %u\n", (num & (~((1 << n) - 1))) | (val & ((1 << n) - 1)));
}
#endif

#if 0
// replace 'n' bits of a given number
#include <stdint.h>

/* On a PC, we simulate the register with a local variable to avoid a crash. */
uint32_t mock_register = 0x10; 

int main()
{
    uint32_t mask = 0b00000011; // Binary for 0x03 (bits 0 and 1 set)
    uint32_t val = 0b00000111;  // Binary for 0x07 (bits 0, 1, and 2 set)

    // Logic: Clear bits in mask, then OR with the new value bits
    mock_register = (mock_register & ~mask) | (val & mask);

    printf("Register after update: 0x%08X (Decimal: %u)\n", mock_register, mock_register);

    return 0;
}
#endif

#if 0
// get n bits from given position
int main()
{
    unsigned int num;
    int pos;
    int n;
    printf("Enter the Number: ");
    scanf("%u", &num);
    printf("Enter the pos: ");
    scanf("%d", &pos);
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("Get n bits from given position : %u\n", ((num & ((1 << (pos + 1)) - 1)) >> ((pos + 1) - n)));
}

#endif

#if 0
// toggle 'n' bits from given position of a number
int main()
{
    unsigned int num;
    int n;
    int pos;
    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("Enter the pos: ");
    scanf("%d", &pos);
    printf("toggle 'n' bits from given position of a number : %u\n", (num ^ (((1 << n) - 1) << ((pos + 1) - n))));
}
#endif

#if 0
// WAP to print 'n' bits from LSB of a number
int main()
{
    unsigned int num;
    int n;
    int pos;
    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("The last n bits from the given number is : %d\n", (num & ((1 << (n + 1)) - 1)));
}

#endif

#if 0
// Circular left shift
int main()
{
    unsigned int num;
    int n;
    int pos;
    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the n: ");
    scanf("%d", &n);
    unsigned int res = ((num >> (32 - n)) | (num << n));
    printf("Circular left shift : %u\n", res);
    int i = 31;
    while (i >= 0)
    {
        (res & (1 << i)) ? printf("1 ") : printf("0 ");
        i--;
    }
}

#endif

#if 0
// WAP to implement Circular right shift

int main()
{
    unsigned int num;
    unsigned int n;

    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the n: ");
    scanf("%u", &n);

    // Sanitize n to be within 0-31; handling n=0 to avoid UB
    n %= 32;
    unsigned int res = (n == 0) ? num : (num >> n) | (num << (32 - n));

    printf("Circular Right shift : %u\n", res);
    int i = 31;
    while (i >= 0)
    {
        (res & (1U << i)) ? printf("1 ") : printf("0 ");
        i--;
    }
    return 0;
}
#endif

#if 0
// nibble swaping
int main()
{
    unsigned char num = 0xAB; // 8 bits storing - 1010 1011
    // unsigned int num = 0xAB;//32 bits and storing - 00000000 -- -- -- 1010 1011
    printf("Before Nibble swapping : %X", num);
    printf("\nAfter Nublle swapping : %X\n", (((num >> 4) & 0x0F) | ((num << 4) & 0xF0))); // 0xF0 means --> -------1111 0000
}
#endif

#if 0
// check whether the system is little or big endien system.

int main()
{
    unsigned int num = 0x12345678;

    /* (unsigned char *) casts the address to a 1-byte pointer.
       This allows us to inspect the individual bytes within the 4-byte integer. */
    unsigned char *p = (unsigned char *)&num;
    // By default, num is an unsigned int, which takes up 4 bytes of memory (on most systems). If you create a pointer to it without a cast (unsigned int *p = &num;), the compiler sees that memory as one single 4-byte block.

    //When you cast it to(unsigned char *), you are telling the compiler : "Stop looking at this as one large 4-byte integer. Start looking at it as a sequence of four 1-byte characters."

                                                                         if (p[0] == 0x12)
    {
        printf("System is Big Endian\n");
    }
    else if (p[0] == 0x78)
    {
        printf("System is Little Endian\n");
    }
    else
    {
        printf("Unknown Endianness\n");
    }

    return 0;
}

#endif

#if 0
#include <stdio.h>

void decToBin(int n)
{
    if (n == 0)
    {
        printf("0");
        return;
    }
    int bits[32], i = 0;
    while (n > 0)
    {
        bits[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bits[j]);
}

int main()
{
    printf("13 in Binary : ");
    decToBin(13);
    printf("\n");
    printf("45 in Binary : ");
    decToBin(45);
    printf("\n");
    printf("255 in Binary: ");
    decToBin(255);
    printf("\n");
    return 0;
}

/*13 in Binary : 1101
45 in Binary : 101101
255 in Binary: 11111111*/

#endif

#if 1

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif

#if 0

#endif
