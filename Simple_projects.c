#if 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bank
{
    char Name[50];
    char AccNumber[50];
    float balance;
    char PhNum[50];
} Bank;

int CreatAccount(Bank Customer);
int choose;
FILE *fp;

int main()
{
    Bank Customers;
    do
    {

        printf("\n1. Create Acoount\n2. Deposit\n3. Withdraw\n4. Display\n5. Exit\n");
        printf("Choose the menu: ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            CreatAccount(Customers);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            exit(1);
            break;
        default:
            break;
        }

    } while (1);
}

int CreatAccount(Bank Customer)
{
    // Clear the input buffer from the previous scanf in main
    while (getchar() != '\n')
        ;

    printf("Enter the Name: ");
    fgets(Customer.Name, sizeof(Customer.Name), stdin);
    Customer.Name[strcspn(Customer.Name, "\n")] = '\0'; // Remove newline

    printf("Enter the Account Number: ");
    fgets(Customer.AccNumber, sizeof(Customer.AccNumber), stdin);
    Customer.AccNumber[strcspn(Customer.AccNumber, "\n")] = '\0'; // Remove newline

    printf("Enter balance: ");
    scanf("%f", &Customer.balance);

    // 1. Open in Read mode to check for duplicates
    FILE *check_fp = fopen("Customer_Name.txt", "r");
    if (check_fp != NULL)
    {
        char line[100];
        char search_term[100];
        // We look for the account number surrounded by the table formatting
        sprintf(search_term, " %-20s ", Customer.AccNumber);

        while (fgets(line, sizeof(line), check_fp))
        {
            if (strstr(line, search_term) != NULL)
            {
                printf("Error: Account Number %s already exists!\n", Customer.AccNumber);
                fclose(check_fp);
                return 1; // Exit function early
            }
        }
        fclose(check_fp);
    }

    // 2. If we reached here, no duplicate was found. Open in Append mode.
    fp = fopen("Customer_Name.txt", "a");
    if (fp == NULL)
    {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    // Write the data to the file
    fprintf(fp, "| %-20s | %-20s | %-15.2f |\n", Customer.Name, Customer.AccNumber, Customer.balance);
    fclose(fp);

    printf("Account created and saved to file successfully.\n");
    return 0;
}
#endif