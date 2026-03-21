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

#if 1
//Remove the vowels from a String
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

#if 0

#endif
