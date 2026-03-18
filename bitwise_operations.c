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

#if 1
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
