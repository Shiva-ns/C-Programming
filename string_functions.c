#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if 0
// Substring identification in main string
int main()
{
    char str[50];
    char sub[50];
    printf("Enter the string:");
    if (fgets(str, sizeof(str), stdin)) str[strcspn(str, "\n")] = '\0'; // Remove newline

    printf("Enter the substring:");
    if (fgets(sub, sizeof(sub), stdin)) sub[strcspn(sub, "\n")] = '\0'; // Remove newline

    int strLen = strlen(str);
    int subLen = strlen(sub);
    int found = 0;

    if (subLen == 0) 
    {
        printf("YES\n");
        return 0;
    }

    for (int i = 0; i <= strLen - subLen; i++)
    {
        int j;
        for (j = 0; j < subLen; j++)
        {
            if (str[i + j] != sub[j])
                break;
        }

        if (j == subLen) // If the inner loop finished without breaking
        {
            found = 1;
            break;
        }
    }

    if (found) printf("YES\n");
    else printf("No\n");

    return 0;
}
#endif
#if 0
#include <stdio.h>
//// Substring identification in main string using built in fun
int main()
{
    char str[30];
    char str2[30];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    printf("Enter the sub string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline

    char *pos = strstr(str, str2);

    if (pos)
    {
        printf("Substring found at index: %ld\n", pos - str);
    }
    else
    {
        printf("Sub string not found ");
    }
}
#endif
#if 0
#include <stdio.h>
// string copy
int main()
{
    char str[30] = "shiva";
    char *str2;
    // strcpy(str2, str);//copy full string
    strncpy(str2, str, 3);
    str2[3] = '\0';

    printf("%s", str2);
}

#endif

#if 0
int main()
{
    char str1[20] = "shiva";
    char str2[20] = "reddy";
    // strcat(str1, str2);
    int i = 0;
    int len = strlen(str1);
    /* while (str2[i] != '\0')
     {
         str1[len++] = str2[i];
         i++;
     }
     str1[len] = '\0';*/
    // printf("After concatination: %s", str1);
    // chain concatination
    /*strcat(str1, " ");
    strcat(str1, "reddy");
    strcat(str1, " ");
    strcat(str1, "from");
    strcat(str1, " ");
    strcat(str1, "Bangalore");
    printf("After concatination: %s", str1);*/
}

#endif

#if 0
int main()
{
    char str1[30] = "shiva";
    char str2[30] = "reddyns";
    printf("The return value of string built in function %d\n", strncat(str1, str2, 5));
    str2[5] = '\0';
    printf("After string concatination : %s\n", str1);
}
#endif

#if 0
int main()
{
    char *str1 = "bannana";
    char *str2 = "bannana";
    char *str3 = "orange";
    char *str4 = "apple";
    char *str5 = "bannana";
    printf("str %d\n", strcmp(str1, str3));
    if (strcmp(str1, str4))
    {
        printf("Not same.\n");
    }
    else
    {
        printf("Same\n");
    }
}

#endif

#if 0
// strchr() — Find Character in String
int main()
{
    char str[30] = "shivareddy";
    printf("The output %d", (strchr(str, 't')));
}

#endif

#if 0
// strstr() — Find Substring
int main()
{
    char *str;
    char *sub;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the sub string:");
    fgets(str, sizeof(sub), stdin);
    
}

#endif

#if 0
#include <string.h>
int main()
{
    printf("Enter the string : ");
    char str[20] = "22";
    char str1[30] = "28";
    int add = atoi(str);
    add = add + atoi(str1);
    printf("After Adding the strings : %d\n", add);
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
