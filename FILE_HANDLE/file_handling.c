// File handling in C allows you to create, read, write, and manipulate files stored on disk. It's done through a set of standard library functions defined in <stdio.h>.
#include <stdio.h>
#if 0
int main()
{

    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        printf("File is not present\n");
        return 0;
    }
    int ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    return 0;
}

#endif

#if 0
// test1
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp = fopen("test1.txt", "w");
    if (fp == NULL)
    {
        printf("File is not present.");
        return 0;
    }

    char string[50] = "shivareddy from karnatraka";

    // Correct way to write to the file:
    fprintf(fp, "%s\n", string); // Writes the string and a newline
    // Alternatively: fputs(string, fp); // Writes the string (without a newline)

    fclose(fp); // Important: Close the file after writing
    printf("Data written to test1.txt successfully.\n");
}

#endif

#if 0
int main()
{
    FILE *p = fopen("test1.txt", "r");
    if (p == NULL)
    {
        printf("The file is not present.");
        return 0;
    }
    char ch;
    while ((ch = fgetc(p)) != EOF)
    {
        printf("%c", ch);
    }
    return 0;
}
#endif

#if 0
int main()
{
    FILE *p = fopen("test1.txt", "r+");
    if (p == NULL)
    {
        printf("The file is not present.");
        return 0;
    }
    char ch;
    while ((ch = fgetc(p)) != EOF)
    {
        printf("%c", ch);
    }
    printf("Enter the data: ");
    char str[50];
    fgets(str, sizeof(str), stdin);
    fprintf(p, "%s\n", str);
    fclose(p);

    return 0;
}

#endif

#if 0
int main()
{
    FILE *fp = fopen("test2.txt", "w");
    if (fp == NULL)
    {
        perror("File open Error.");
        return 0;
    }
    printf("%c", fputc('A', fp));
    fputc('B', fp);
    fputc('C', fp);
    fputc('D', fp);
    fclose(fp);
}

#endif

#if 0
int main()
{
    printf("Enter the string: ");
    char str[50];
    fgets(str, sizeof(str), stdin);
    FILE *fp = fopen("test3.txt", "w");
    if (fp == NULL)
    {
        perror("File open error.\n");
        return 0;
    }
    int i = 0;
    while ((fputc(str[i], fp)) != '\0')
    {
        i++;
    }
    return 0;
}

#endif

#if 1
int main()
{
    
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

#if 0

#endif
