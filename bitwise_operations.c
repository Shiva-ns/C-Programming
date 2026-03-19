#include <stdio.h>

#if 0
// Check if a number is Even or Odd.
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num & (1 << 0))
    {
        printf("The odd number.");
    }
    else
    {
        printf("The even number.");
    }
}

#endif

#if 0
// Get the n-th bit of a number
int main()
{
    int num;
    int nth;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the nth bit: ");
    scanf("%d", &nth);
    if ((num & (1 << nth)))
    {
        printf("n-th bit is = 1");
    }
    else
    {
        printf("n-th bit is = 0");
    }
}
#endif

#if 0
// Set the n-th bit of a number (make it 1).
int main()
{
    int num;
    int nth;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the nth bit: ");
    scanf("%d", &nth);
    printf("Before setting the bit %d", num);
    printf("\nAfter the setting the bit: %d", (num | (1 << nth)));
}
#endif

#if 0
// Clear the n-th bit of a number (make it 0).
int main()
{
    int num;
    int nth;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the nth bit: ");
    scanf("%d", &nth);
    printf("Before clearing the bit : %d", num);
    printf("\nAfter clearing the bit : %d", (num & ~(1 << nth)));
}
#endif

#if 0
// Toggle the n-th bit (flip 0 to 1 or 1 to 0).

int main()
{
    int num;
    int nth;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the nth bit: ");
    scanf("%d", &nth);
    printf("After toggling the bit: %d", (num ^ (1 << nth)));
}
#endif

#if 0
// Check if a number is a Power of Two.
int main()
{
    int num;
    int flag = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int i = 0;
    while (i <= num)
    {
        if (num == (1 << i))
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag)
    {
        printf("it is power of 2\n");
    }
    else
    {
        printf("it is not power of 2\n");
    }
}
#endif

#if 0
// Swap two numbers without a temporary variable.

int main()
{
    int a;
    int b;
    printf("Enter a and b : ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Beofre swaping\na = %d\nb = %d\n", a, b);
    a = a ^ b;
    b = b ^ a;
    a = b ^ a;
    printf("After swaping\na = %d\nb = %d\n", a, b);
}
#endif

#if 0
// Count the total number of set bits (1s) in an integer.
int main()
{
    int num;
    printf("Enter the number: ");
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
    printf("The count of set bits in number : %d\n", c);
}
#endif

#if 0
// Find the only non-repeating element in an array where every other element repeats twice.
int main()
{
    int arr[5] = {2, 3, 2, 4, 4};
    for (int i = 0; i < 5; i++)
    {
        int c = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
            }
        }
        if (c == 1)
        {
            printf("%d", arr[i]);
        }
    }
}
#endif

#if 0

int main()
{
    int arr[5] = {1, 5, 1, 6, 5};
    for (int i = 0; i < 5; i++)
    {
        int c = 0;
        for (int j = 0; j < 5; j++)
        {
            if (!(arr[i] ^ arr[j]))
            {
                c++;
            }
        }
        if (c == 1)
        {
            printf("%d", arr[i]);
        }
    }
}
#endif

#if 0

int main()
{
    int arr[5] = {1, 5, 1, 6, 5};
    int result = 0;
    for (int i = 0; i < 6; i++)
    {
        result ^= arr[i];
    }
    printf("%d", result);
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
    unsigned int num;
    printf("Enter the number: ");
    scanf("%u", &num);
    /*int i = 0;
    while (i <= 31)
    {
        if (num & (1 << i))
        {
            num = num & (~(1 << i));
            break;
        }
        i++;
    }*/
    num = num & (num - 1);
    printf("After clearing the LSB set bit: %u\n", num);
}
#endif

#if 0
// WAP to get 'n' bits of a given number
int main()
{
    unsigned int num;
    int n;
    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the n bits: ");
    scanf("%d", &n);
    printf("the value of n bits of given number is : %u\n", (num & ((1 << n) - 1)));
}
#endif

#if 0
// WAP to toggle 'n' bits of a given number
int main()
{
    unsigned int num;
    int n;
    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the n bits: ");
    scanf("%d", &n);
    printf("toggle 'n' bits of a given number is %u\n", (num ^ ((1 << n) - 1)));
}
#endif

#if 0
// WAP to replace 'n' bits of a given number

int main()
{
    unsigned int num;
    int n;
    unsigned int val;
    printf("Enter the num: ");
    scanf("%u", &num);
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("Enter the val: ");
    scanf("%u", &val);
    printf("After replaced 'n' bits of a given number :  %u\n", (((num & (~((1 << n) - 1)))) | (val & ((1 << n) - 1))));
}
#endif

#if 0

int get_nbits_from_pos(int, int, int);

int main()
{
    int num, n, pos, res = 0;

    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);

    res = get_nbits_from_pos(num, n, pos);

    printf("Result = %d\n", res);
}
int get_nbits_from_pos(int num, int n, int pos)
{
    int r = (((num & ((1 << (pos + 1)) - 1))) >> ((pos + 1) - n));
    // intr= (get n bits and mask from pos (should use pos + 1 for logic to get and mask)) >> (right swift bits to the zeroth pos)
    return r; // retrun r value
}
#endif

#if 0
// toggle 'n' bits from given position of a number
int main()
{
    int num, n, pos = 0;

    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    n = (pos + 1) - n;
    while (pos >= n)
    {
        num = num ^ (1 << n++);
    }
    printf("toggle 'n' bits from given position of a number : %d", num);
}
#endif

#if 0

// toggle 'n' bits from given position of a number
int main()
{
    int num, n, pos = 0;

    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    int mask = ((1 << n) - 1) << (pos - n + 1);
    num = num ^ mask;
    printf("toggle 'n' bits from given position of a number : %d", num);
}
#endif

#if 0
// WAP to print 'n' bits from LSB of a number

int main()
{
    int num;
    int n;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the number of bits: ");
    scanf("%d", &n);
    int i = n-1;
    printf("the n bits are : %d\n", i);
    while (i >= 0)
    {
        if (num & (1 << i))
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
        i--;
    }
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif

#if 0

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
}
#endif
