#include <stdio.h>
#if 0
int main()
{
    // char charecter_arr[] = {'s', 'h', 'i', 'v', 'a'};
    //char charecter_arr[6] = "shiva";
    // char *str = "shiva";
    //printf("%s", charecter_arr);

    // printf("String literal : %c\n", str);
}

#endif

#if 0
// Check whether a character is a vowel or consonant
#include <ctype.h>
int main()
{
    char arr[] = "aeiouAEIOU";
    // printf("The size of arr %d\n", sizeof(arr));
    char a;
    printf("Enter the Charecter:");
    scanf("%c", &a);
    int i = 0;
    int flag = 0;
    while (arr[i] != '\0')
    {

        if (arr[i] == a)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 1)
    {
        printf("it char %c is vowel..", a);
    }
    else if (isalpha(a))
    {
        printf("it char %c is cosonent..", a);
    }
    else
    {
        printf("%c is not the alpha..", a);
    }
}

#endif

#if 0
// Check whether a character is a alphabet or not
#include <ctype.h>
int main()
{
    char c;
    printf("Enter the charecter :");
    scanf("%d", &c);
    if (isalpha(c))
    {
        printf("YES");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}
#endif

#if 0
// Find the ASCII value of a character
int main()
{
    char c;
    printf("Enter the char :");
    scanf("%c", &c);
    printf("The ascii value of char '%c' is %d\n", c, c);
}
#endif

#if 0
// Length of the string without using strlen() function
#include <string.h>
int main()
{
    char str[20];
    printf("Enter the string :");
    scanf("%s", &str);
    // printf("The lenth of string is %d", strlen(str));
    int len = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }
    printf("The lenght of string is : %d\n", len);
}
#endif

#if 0
#include <ctype.h>
int main()
{
    char str[20];
    printf("Enter the string : ");
    scanf("%s", str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (isalpha(str[i]))
        {
            if (str[i] >= 65 && str[i] <= 90)
            {
                str[i] = str[i] + 32;
            }
            else
            {
                str[i] = str[i] - 32;
            }
        }
        i++;
    }
    printf("After toggling of string : %s\n", str);
}
#endif

#if 0
#include <stdlib.h>
// Count the number of vowels
#include <string.h>
int main()
{
    char *str = malloc(sizeof(char *));
    // printf("The size of stinfg litteral %d\n", sizeof(str));
    printf("Enter the string : ");
    scanf("%s", str);
    char *volwels = "aeiouAEIOU";
    // printf("The size of stinfg litteral %d\n", sizeof(str));
    // printf("The size of stinfg litteral %d\n", strlen(str));
    int i = 0;
    int c = 0;
    while (str[i] != '\0')
    {
        int j = 0;
        while (volwels[j] != '\0')
        {
            if (volwels[j] == str[i])
            {
                c++;
            }
            j++;
        }
        i++;
    }
    printf("the total number of Vowels present in the string is : %d\n", c);
    free(str);
    return 0;
}

#endif

#if 0
//concatination
int main()
{
    char str1[30] = "shiva";
    char str2[30] = "reddy";
    // printf("%d", sizeof(str1));
    int i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("%s", str1);
}
#endif

#if 0
//concatination
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[40];
    char str2[40];
    printf("Read the str1: ");
    fgets(str1, sizeof(str1), stdin);//It's generally preferred over scanf("%s", ...) for reading strings because it helps prevent buffer overflows, a common security vulnerability.
    printf("Read the str2: ");
    fgets(str2, sizeof(str2), stdin);
    printf("%s", str1);
    printf("%s", str2);
    printf("After concatination:\n");
    char *ch = strcat(str1, str2);
    printf("%s", ch);
}

#endif

#if 0
/*WAP to replace each string of one or more blanks by a single blank
Enter the string with more spaces in between two words
Pointers     are               sharp     knives.
Pointers are sharp knives.*/
#include <stdlib.h>
void remove_spaces(char *str1);
int main()
{
    char str[50];
    printf("Enter the string:");
    // scanf("%[^\n]", str);
    /*Convenience: It does not include the newline character in your string.
Risk: By default, it is unsafe. If the user enters more characters than the array can hold, it will overflow and potentially crash the program. You must manually add a width limit (e.g., %29[^\n]) to make it safe.
Input Buffer Issues: It leaves the newline character (\n) sitting in the input stream. If you call scanf again immediately after, it will read that leftover newline and stop immediately, resulting in an empty string.*/
    fgets(str, sizeof(str), stdin);
    printf("Before removing spaces : %s", str);
    remove_spaces(str);
    printf("After Removing the Space : %s\n", str);
}
void remove_spaces(char *str1)
{

    for (int i = 1; i < 50; i++)
        if (*(str1 + i) == ' ' && *(str1 + i - 1) == ' ' && *(str1 + i) != '\0')
        {
            for (int j = i; j < 50; j++)
            {
                *(str1 + j - 1) = *(str1 + j);
            }
            i--;
        }
}

#endif

#if 0
#include <stdlib.h>
// WAP to implement getword function
/*Enter the string : Welcome to Emertxe
You entered Welcome and the length is 7*/
int get_word(char *str);
int main()
{
    printf("Enter the string: ");
    char str[100];
    fgets(str, sizeof(str), stdin);
    printf("%s", str);
    int len = get_word(str);
    printf("You entered %s and the lenght is %d\n", str, len);
}
int get_word(char *str)
{
    int i = 0;

    while (i < 100)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
    return i;
}

#endif

#if 0
// WAP to implement atoi function
int main()
{
    char *str = "12345";
    int result = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    printf("The converted integer is: %d\n", result);
    return 0;
}
#endif

#if 0
// WAP to implement itoa function
void itoa(char *str, int num);
int main()
{
    int num;
    printf("Enter the number: ");
    if (scanf("%d", &num) != 1)
        return 1;
    char str[20];
    itoa(str, num);
    printf("The string is: %s\n", str);
    return 0;
}
void itoa(char *str, int num)
{
    int i = 0;
    int m = 0;

    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return;
    }

    while (num > 0)
    {
        m = num % 10;
        str[i] = m + 48; // 48 is ASCII for '0'
        num = num / 10;
        i++;
    }
    str[i] = '\0';

    // Reverse the string to get the correct order (e.g., "321" -> "123")
    int start = 0;
    int end = i - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
#endif

#if 0
// string reverse recursion
/*Enter a string : Hello World
Reverse string is : dlroW olleH*/
#include <stdlib.h>
#include <string.h>
int reverse(char *str, int len)
{
    static int i = 0;

    char t = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = t;
    i++;
    if (i < len / 2)
    {
        reverse(str, len);
    }
    return str[len - i - 1];
}
int main()
{
    char str[50];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    reverse(str, len);
    printf("reverse the string : %s", str);
}

#endif

#if 0
#include <stdio.h>
int main()
{
    char char_array_1[] = {'H', 'E', 'L', 'L', 'O'}; // undifined Behavior
    char char_array_2[] = "Hello";
    char *str = "shiva";
    printf("the size of array of charecters : %d\n", sizeof(char_array_1));
    printf("the size of array of string : %d\n", sizeof(char_array_2));
    printf("the size of array of string literal : %d\n", sizeof(str));
    printf("the array of char NULL : %c\n", char_array_1[5]);
    printf("the array of string NULL : %c\n", char_array_1[5]);
    printf("the array of string Literal NULL : %c\n", char_array_1[5]);
    printf("if i dont add null terminatote ? %s\n", char_array_1);
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
