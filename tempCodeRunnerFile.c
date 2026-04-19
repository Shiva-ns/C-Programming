/ Calculate frequency of characters in a string
int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    int visited[100] = {0};
    int count = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
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
