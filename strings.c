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
#include <stdio.h>
#include <string.h>
// count duplicates in an sring and also the elements of array.
int main()
{
    char str[100] = "programming";
    // int str[6] = {3, 4, 3, 1, 3, 1};
    int len = strlen(str);
    // int len = 6;
    int visited[100] = {0};
    int duplicate_count = 0;

    for (int i = 0; i < len; i++)
    {
        if (visited[i] == 1)
            continue;

        int count = 1;
        int k = 0;
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                visited[j] = 1;
                k = j;
            }
        }

        if (count > 1)
        {
            duplicate_count++; // only count duplicate characters
            printf("%c ", str[k]);
        }
    }

    printf("\nTotal duplicate characters = %d\n", duplicate_count);

    return 0;
}
#endif

#if 0
// Remove the vowels from a String
#include <stdio.h>
int main()
{
    char str[100];
    char vowel[50] = "aeiou";
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    printf("Before Removing the Vowels: %s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; vowel[j] != '\0'; j++)
        {
            if (str[i] == vowel[j])
            {
                for (int k = i; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
                i--;
            }
        }
    }
    printf("After Removing the Vowels: %s", str);
}
#endif

#if 0
// Remove all characters from string except alphabets
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]", str);
    printf("Before Removing the un alphabets : %s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
        {
            for (int k = i; str[k] != '\0'; k++)
            {
                str[k] = str[k + 1];
            }
            i--;
        }
    }
    printf("\nAfter Removing the un alphabets : %s", str);
}

#endif

#if 0
// Remove spaces from a string
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    printf("Before Removing the space : %s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i >= 1)
        {
            if (str[i] == ' ' && str[i] == str[i - 1])
            {
                for (int k = i; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
                i--;
            }
        }
    }
    printf("\nAfter Removing the spaces : %s", str);
}
#endif

#if 0
// Capitalize the first and last character of each word of a string
int main()
{
    char str[50];
    printf("Enter the string :");
    scanf("%[^\n]", str);
    printf("Before Capitalize the first and last character: %s", str);
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (i == 0)
        {
            if (str[i] >= 'a')
            {
                str[0] = str[0] - 32;
            }
            continue;
        }
        if (str[i] == ' ')
        {
            if (!((str[i - 1] >= 'A') && (str[i - 1] <= 'Z')))
            {
                str[i - 1] = str[i - 1] - 32;
            }
            if (!((str[i + 1] >= 'A') && (str[i + 1] <= 'Z')))
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
    }
    str[i - 1] = str[i - 1] - 32;

    printf("\nAfter Capitalize the first and last character: %s", str);
}
#endif

#if 0
// Calculate frequency of characters in a string
int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    int visited[100] = {0};
    int count = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        if (visited[i] == 1)
        {
            continue;
        }
        count = 1;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        printf("%c = %d\n", str[i], count);
    }
}

#endif

#if 0
// Find non-repeating characters in a string
int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    int flag = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        flag = 1;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j] && i != j)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("%c ", str[i]);
        }
    }
}

#endif

#if 0
// check and substring in a string and the starting index num of that string
#include <string.h>
#include <stdio.h>
int main()
{
    char str[50];
    char sub_str[50];
    printf("Enter the strings : ");
    scanf("%[^\n]", str);
    printf("Enter the sub string : ");
    scanf(" %[^\n]", sub_str);
    int len = strlen(sub_str);
    int i = 0;
    int flag = 1;
    while (str[i] != '\0')
    {
        int k = i;
        int j = 0;
        flag = 1;
        while (sub_str[j] != '\0')
        {
            if (str[k] != sub_str[j])
            {
                flag = 0;
                break;
            }
            j++;
            k++;
        }
        if (flag)
        {
            break;
        }
        i++;
    }
    len = len + i;
    printf("Index at %d\n", i);
    while (i < len)
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\nThe string %s", str);
    return 0;
}

#endif

#if 0
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char sub_str[50];

    printf("Enter the main string: ");
    scanf(" %[^\n]", str); // space before % fixes buffer issue

    printf("Enter the sub string: ");
    scanf(" %[^\n]", sub_str);

    int len_str = strlen(str);
    int len_sub = strlen(sub_str);

    int found = 0;
    int index = -1;

    // Only go till valid range
    for (int i = 0; i <= len_str - len_sub; i++)
    {
        int j = 0;

        while (j < len_sub)
        {
            if (str[i + j] != sub_str[j])
            {
                break;
            }
            j++;
        }

        if (j == len_sub) // full match
        {
            found = 1;
            index = i;
            break;
        }
    }

    if (found)
    {
        printf("Substring found at index: %d\n", index);

        // print substring from main string
        printf("Matched substring: ");
        for (int i = index; i < index + len_sub; i++)
        {
            printf("%c", str[i]);
        }
    }
    else
    {
        printf("Substring not found\n");
    }

    return 0;
}

#endif

#if 0
//len of string
#include <stdlib.h>
int main()
{
    char str[50];
    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    printf("The len of string is : %d\n", i);
}
#endif
// #include <stdlib.h>
#if 0
// copy string to another string
int main()
{
    char str1[50];
    char str2[50];
    fgets(str1, sizeof(str1), stdin);
    int i = 0;

    while (i + 1)
    {
        if (str1[i] != '\0')
        {
            str2[i] = str1[i];
            i++;
            continue;
        }
        str2[i] = str1[i];
        break;
    }
    // str2[i] = '\0';
    printf("str2 out put :  %s", str2);
}
#endif

#if 0
int main()
{
    char str1[6];

    fgets(str1, sizeof(str1), stdin); // perfect whih limits as per size of string.
    // scanf("%[^\n]", str1);//buffer over flow scan upto new line
    // scanf("%s", str1); // buffer over flow and scan up to white space
    printf("the sise of string : %d\n", sizeof(str1));

    printf("the string : %s", str1);
}

#endif

#if 0
// concatination
#include <string.h>
int main()
{

    char str1[50];
    char str2[50];
    printf("Enter the string 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the string 2: ");
    fgets(str2, sizeof(str2), stdin);
    int len = strlen(str1);
    int i = 0;
    while (str2[i] != '\0')
    {
        str1[len + i - 1] = str2[i];
        i++;
    }
    str1[len + i - 1] = '\0';
    printf("After concatination: %s", str1);
}
#endif

#if 0
// string comparision
int main()
{

    char str1[50];
    char str2[50];
    printf("Enter the string 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the string 2: ");
    fgets(str2, sizeof(str2), stdin);
    int flag = 1;
    int i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}

#endif

#if 0
// Tokenize a comma-separated string manually (without strtok) using pointer traversal.

int main()
{
    char str1[30];
    char str2[30];
    char *token[5];
    printf("Enter the string: ");
    fgets(str1, sizeof(str1), stdin);

    int i = 0;
    int k = 0;
    int j = 0;
    int flag = 1;
    int count = 0;
    while (str1[i] != '\0')
    {
        flag = 1;
        if (str1[i] == ',' || str1[i] == ' ' || str1[i + 1] == '\0')
        {
            flag = 0;
        }
        else
        {
            str2[j] = str1[i];
        }
        j++;
        if (!(flag))
        {
            str2[i] = '\0';
            // printf("%s ", str2);
            for (int t = 0; str2[t] != '\0'; t++)
            {
                token[k][t] = str2[t];
            }
            k++;
            str2[0] = '\0';
            flag = 1;
            j = 0;
            count++;
        }
        i++;
    }

    printf("\nAfter sentence made as tockens :");
    for (int i = 0; i < count; i++)
    {
        printf("%s", token[i]);
    }
}

#endif

#if 0
// Write a program that uses strtok to split a sentence into words and print each word on a new line.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "apple,banana,cherry,date";
    char *token;

    printf("Original: \"%s\"\n\n", str);
    printf("%s", str);
    // First call - pass string + delimiters
    token = strtok(str, ",");
    printf("\n");
    while (token != NULL)
    {
        printf("Token: \"%s\"\n", token);
        //  printf("String now: \"%s\"\n\n", str);

        // Next calls - pass NULL + delimiters

        token = strtok(NULL, ",");
    }

    printf("Final string: \"%s\"\n", str);

    return 0;
}

#endif

#if 0
#include <string.h>
// Write a C function to reverse words in a string in-place (e.g., 'the sky is blue' → 'blue is sky the').
void reverse_words(char *str, int len);
int main()
{
    char str[50];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline safely
    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }
    int i = 0;
    printf("Before Reverse the string: %s", str);
    while (i < (len / 2))
    {
        char t = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = t;
        i++;
    }
    printf("\nAfter Reverse the string: %s", str);
    printf("\nReversing the words :");
    reverse_words(str, len);
    printf("\nAfter Reversing words in  string:  %s", str);
    return 0;
}
void reverse_words(char *str, int len)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i <= len)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            j = k;
            int end = i - 1;
            while (j < ((i + k) / 2))
            {
                char t = str[j];
                str[j] = str[end];
                str[end] = t;
                j++;
                end--;
            }

            k = i + 1;
        }
        i++;
    }
}

#endif

#if 0
#include <stdio.h>
#include <string.h>

// Function to reverse a portion of string
void reverse(char *str, int start, int end)
{
    while (start < end)
    {
        char t = str[start];
        str[start] = str[end];
        str[end] = t;
        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline safely
    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    printf("Before: %s\n", str);

    // Step 1: Reverse entire string
    reverse(str, 0, len - 1);

    // Step 2: Reverse each word
    int start = 0;
    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("After: %s\n", str);

    return 0;
}

#endif

#if 0
// Check if two strings are Anagram or not
#include <string.h>
#include <stdlib.h>
int Anagram(char *str1, char *str2);
int count = 0;
int len = 0;
int main()
{
    char *str1;
    char *str2;
    Anagram(str1, str2);
    printf("The count is : %d\n", count);
    printf("The len is : %d\n", len);
    if (count == len)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

int Anagram(char *str1, char *str2)
{

    str1 = malloc(20);
    str2 = malloc(20);
    int Al_veri[len];
    printf("Enter the strin 1: ");
    fgets(str1, 20, stdin);
    printf("Enter the string 2: ");
    fgets(str2, 20, stdin);
    len = strlen(str1);
    int i = 0;
    int j = 0;
    while (str1[i] != '\0')
    {

        j = 0;
        while (str2[j] != '\0')
        {
            if (Al_veri[i] == 1)
            {
                continue;
            }
            if (str1[i] == str2[j])
            {
                count++;
                Al_veri[j] = 1;
                
            }
            j++;
        }
        i++;
    }
}
#endif

#if 0
// Check if two strings are Anagram or not
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count = 0;
int len = 0;

int Anagram(char *str1, char *str2)
{
    str1 = malloc(20);
    str2 = malloc(20);

    printf("Enter string 1: ");
    fgets(str1, 20, stdin);

    printf("Enter string 2: ");
    fgets(str2, 20, stdin);

    // remove newline
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    len = strlen(str1);

    if (len != strlen(str2))
        return 0;

    int Al_veri[20] = {0}; // initialize

    for (int i = 0; i < len; i++)
    {
        int found = 0;

        for (int j = 0; j < len; j++)
        {
            if (Al_veri[j] == 0 && str1[i] == str2[j])
            {
                count++;
                Al_veri[j] = 1;
                found = 1;
                break; // important
            }
        }

        if (!found)
            return 0;
    }

    return 1;
}

int main()
{
    char *str1;
    char *str2;

    if (Anagram(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

#endif

#if 0
// merge 2 arrays using 3 array
#include <stdlib.h>
int merge(int arr1[], int arr2[], int result[], int s1, int s2, int r);
int main()
{
    int *arr1 = malloc(5);
    int *arr2 = malloc(5);
    int *result = malloc(10);
    printf("Enter Array 1 elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter Array 2 elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }
    merge(arr1, arr2, result, 5, 5, 10);
    printf("After Merging the arrays: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", result[i]);
    }
    free(arr1);
    free(arr2);
    free(result);
    return 0;
}

int merge(int *arr1, int *arr2, int *result, int s1, int s2, int r)
{
    int i;
    for (i = 0; i < s1; i++)
    {
        result[i] = arr1[i];
    }
    int j = i;
    for (i = 0; i < s2; i++)
    {
        result[j + i] = arr2[i];
    }
}

#endif

#if 0
//// merge 2 arrays using 3 array
#include <stdlib.h>
void merge(int *arr1, int *arr2, int s1, int s2);
int main()
{
    int *arr1 = malloc(5);
    if (arr1 == NULL)
    {
        printf("Error\n");
    }
    int *arr2 = malloc(5);
    if (arr2 == NULL)
    {
        printf("Error\n");
    }
    printf("Enter Array 1 elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter Array 2 elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }
    merge(arr1, arr2, 5, 5);
    printf("After Merging the arrays: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
    free(arr1);
    free(arr2);
    return 0;
}
void merge(int *arr1, int *arr2, int s1, int s2)
{
    arr1 = realloc(arr1, s1 + s2);
    if (arr1 == NULL)
    {
        printf("Error\n");
    }
    int j = s1;
    for (int i = 0; i < s2; i++)
    {
        *(arr1 + (j + i)) = *(arr2 + i);
    }
}
#endif

#if 0
// Rotation of elements of array- left and right
int main()
{
    int arr[5];
    int rotate;

    printf("Enter the Elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the numbers of times rotation: ");
    scanf("%d", &rotate);
    printf("Before Rotating the array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < rotate; i++)
    {
        int t = arr[0];
        int j;
        for (j = 1; j < 5; j++)
        {
            arr[j - 1] = arr[j];
        }
        arr[j - 1] = t;
    }
    printf("\nAfter Rotating the array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

#endif

#if 0
// Rotation of elements of array- right
int main()
{
    int len;
    printf("Enter the lenght of arr: ");
    scanf("%d", &len);
    int arr[len];
    int rotate;

    printf("Enter the Elements: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the numbers of times rotation: ");
    scanf("%d", &rotate);
    printf("Before Rotating the array: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < rotate; i++)
    {
        int t = arr[len - 1];
        int j;
        for (j = 1; j < 5; j++)
        {
            arr[len - j] = arr[len - j - 1];
        }
        arr[0] = t;
    }
    printf("\nAfter Rotating the array: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

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
