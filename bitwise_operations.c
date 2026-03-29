#include <stdio.h>

#if 0
//set bits
int main()
{
    int num = 7;
    int i = 0;
    int c = 0;
    // printf("%d", sizeof(num));
    while (i < sizeof(num) * 8)
    {
        if (num & (1 << i))
        {
            c++;
        }
        i++;
    }
    printf("The total set bits in the number is =  %d\n", c);
}
#endif

#if 0
// set bits using macro
#define SET_BITS(num, i) (num & (1 << i))
int main()
{
    int num = 8;
    int i = 0;
    int c = 0;
    // printf("%d", sizeof(num));
    while (i < sizeof(num) * 8)
    {
        if (SET_BITS(num, i))
        {
            c++;
        }
        i++;
    }
    printf("The total set bits in the number is =  %d\n", c);
}

#endif

#if 0
/*Set the 3rd bit of a number.
Input:  num = 8
Output: 12*/
#define SETBIT_AT_3rd(num, a) num | (1 << a)
int main()
{
    int num = 8;
    printf("Before setting the bit %d", num);
    printf("\nAfter the setting the 3rd bit the Value is : %d\n", SETBIT_AT_3rd(num, 2));
}
#endif

#if 0
/*Clear the 2nd bit of a number.
Input:  num = 7
Output: 5*/
#define Clear_2nd_bit(num, a) (num & (~(1 << a)))
int main()
{
    int num = 7;
    printf("Before the clearing the bit : %d\n", num);
    // printf("After the clearing 2nd bit the value is %d\n", num & (~(1 << 1)));
    printf("After the clearing 2nd bit the value is %d\n", (Clear_2nd_bit(num, 1)));
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
    if (num &(1 << 4))
    {
        printf("SET\n");
    }
    else
    {
        printf("NOT SET\n");
    }
}

#endif

#if 0
/*Toggle the 3rd bit
Input: num = 8
Output: 0
*/
int main()
{
    int num = 8;
    printf("After toggleing the value is %d\n", num ^ (1 << 2));
}

#endif
// #include <string.h>
#if 0
// sort given array using bubble
int main()
{
    int arr[] = {3, 1, 5, 2, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", len);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

#endif

#if 0
// #include <stdio.h>

int main()
{
    int arr[] = {3, 1, 5, 2, 7};

    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Length: %d\n", len);

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

#endif
#include <stdlib.h>
#if 0
struct single
{
    int data;
    struct single *next;
};

struct single *head = NULL;
int insert(int val)
{
    struct single *node = (struct single *)malloc(sizeof(struct single));
    if (node == NULL)
    {
        printf("memory is not allocated.");
    }

    node->data = val;
    node->next = NULL;
    if (head == NULL)
    {
        head = node;
        return 0;
    }
    node->next = head;
    head = node;
}
int print()
{
    struct single *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int sort()
{
    struct single *temp = head;
    struct single *temp2;

    while (temp != NULL)
    {
        temp2 = temp->next;
        while (temp2 != NULL)
        {

            if (temp->data > temp2->data)
            {
                int t = temp->data;
                temp->data = temp2->data;
                temp2->data = t;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
}
/*int sort()
{
    struct single *temp = head;
    struct single *temp2 = head;
    struct single *temp3 = temp;

    while (temp != NULL)
    {
        temp2 = temp;
        while (temp3 != NULL)
        {

            if (temp2->data > temp3->data)
            {
                int t = temp2->data;
                temp2->data = temp3->data;
                temp3->data = t;
            }

            temp2 = temp2->next;
            temp3 = temp2->next;
        }

        temp = temp->next;
    }
}*/
int main()
{
    insert(6);
    insert(7);
    insert(2);
    insert(5);
    print();
    sort();
    print();
}
#endif

#if 0
#define TOGGLE(num, a) (num ^ (1 << 1))
int main()
{
    int num = 5;
    printf("After toggle %d\n", TOGGLE(num, 1));
}
#endif

#if 0
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (!(num & (1 << 0)))
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
}

#endif

#if 0
// Create structure to store student details
struct student
{
    char name[20];
    char schol[20];
    int class;
    char session;
};

int main()
{

    struct student std[3];
    for (int j = 1; j < 3; j++)
    {

        printf("Please Enter the student %d name:", j);
        scanf(" %[^\n]", std[j].name);
        printf("Enter the student %d school name:", j);
        scanf(" %[^\n]", std[j].schol);
        printf("Enter the student %d class:", j);
        scanf("%d", &std[j].class);
        printf("Enter the student %d session:", j);
        scanf(" %c", &std[j].session);
    }
    printf("....................................................................");
    for (int j = 1; j < 3; j++)
    {

        printf("\nthe student %d name: %s", j, std[j].name);
        printf("\nthe student %d school name:%s", j, std[j].schol);
        printf("\nthe student %d class:%d", j, std[j].class);
        printf("\nthe student %d session:%c", j, std[j].session);
    }
}

#endif
#include <stdio.h>

#if 0
int main()
{
    int num = 15;
    if (num & (1 << 0))
    {
        printf("odd number\n");
    }
    else
    {
        printf("even number\n");
    }
}
#endif

#if 0
int main()
{
    int num;
    printf("Enter the num:");
    scanf("%d", &num);
    printf("after = %d\n", (num << 1));
}
#endif

#if 0
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int i = 31;
    while (i >= 0)
    {
        if (num & (1 << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        i--;
    }
}

#endif

#if 0
int main()
{
    int a, b;
    printf("Enter the a and b values:");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Before swap:\na=%d\nb=%d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = b ^ a;
    printf("After swap:\na=%d\nb=%d\n", a, b);
}
#endif

//.........................

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
// WAP to implement Circular left shift
int main()
{
    unsigned int num;
    int n;
    unsigned int res = 0;
    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the n: ");
    scanf("%d", &n);
    res = (((num >> (32 - n))) | (num << n));
    printf("After Circular left shifting : %u\n", res);
}
#endif

#if 0
// WAP to implement Circular right shift

int main()
{
    unsigned int num;
    int n;
    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("THE Circular right shift is : %u\n", (num >> n) | (num << (32 - n)));
}
#endif

#if 0
// bits swaping uisng toggle.
#define BIT_SWAPING(num, i, j) ((num ^ (1 << i)) ^ (1 << j))
int main()
{
    unsigned int num;
    int i, j;
    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the swaping bit positions: ");
    scanf("%d", &i);
    scanf("%d", &j);
    printf("Before Bits Swap: %u\n", num);
    if (((num >> i) & 1) != ((num >> j) & 1))
    {
        printf("After bits are swaping both bits are diff : %u", BIT_SWAPING(num, i, j));
    }
    else
    {

        printf("After Bit Swaping both bits are same:  %u\n", num);
    }
}
#endif

#if 0
// nibble swaping
int main()
{
    unsigned int num;

    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Before Nibble Swaping : %u", num);
    printf("\nAfter Nibble Swaping : %u", ((num & 0x0f) << 4) | ((num & 0xf0) >> 4));
}
#endif

#if 0
// check whether the system is little or big endien system.

int main()
{
    unsigned int num = 0x12345678;
    unsigned char *p = (unsigned char *)&num;
    if (p[0] == 0x12)
    {
        printf("It is and Big Endien\n");
    }
    else if (p[0] == 0x78)
    {
        printf("It is an little Endien\n");
    }
    else
    {
        printf("It is an unknown Endien\n");
    }
}
#endif

#if 0

int main()
{
    unsigned int num;
    printf("Enter the number: ");
    scanf("%x", &num);
    unsigned char *p = (unsigned char *)&num;
    if (p[0] == 0x78)
    {
        printf("little endien. ");
    }
    else if (p[0] == 0x12)
    {
        printf("Big endiesn. ");
    }
    else
    {
        printf("Unknown.");
    }
}
#endif

#if 0

int main()
{
    unsigned int x = 0x12345678;
    unsigned char *p = (unsigned char *)&x;
    printf("the size of %d\n", sizeof(p[0]));
    printf("p[0] = %x\np[1] = %x\np[2] = %x\n,p[3] = %x\n", p[0], p[1], p[2], p[3]);
}
#endif

#if 0

int main()
{
    short y = 0x1234;
    unsigned char *q = (unsigned char *)&y;
    printf("p[0] = %x\np[1] = %x\n", q[0], q[1]);
}
#endif

#if 0

int main()
{
    unsigned int x = 0x12345678;
    unsigned char *p = (unsigned char *)&x;

    // printf("%x\n", p[3]);
    // unsigned int result = ((x & 0x000000FF) << 24) | ((x & 0xFF000000) >> 24) | ((x & 0x00FF0000) >> 8) | (((x & 0x0000FF00)) << 8);
    // printf("%x\n", result);
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
