#include <stdio.h>
#if 0
#include <stdio.h>

int main()
{
    int matrix[3][4];

    printf("Total size    = %zu bytes\n", sizeof(matrix));    // 48 bytes
    printf("One row size  = %zu bytes\n", sizeof(matrix[0])); //16 bytes
    printf("One elem size = %zu bytes\n", sizeof(matrix[0][0]));//4
    printf("Rows          = %zu\n", sizeof(matrix) / sizeof(matrix[0]));//3
    printf("Cols          = %zu\n", sizeof(matrix[0]) / sizeof(matrix[0][0]));//4
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int m[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Method 1 — normal way
    printf("Normal print:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%3d", m[i][j]);
        printf("\n");
    }

    // Method 2 — with borders
    printf("\nWith borders:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("[ ");
        for (int j = 0; j < 3; j++)
            printf("%d ", m[i][j]);
        printf("]\n");
    }

    return 0;
}
#endif

#if 0
// WAP to find the MIN and MAX of a 2D array
int main()
{
    int row, col;
    printf("Enter the row and col : ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    printf("Enter the Elements of 2 D array: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the Elements of 2 D array: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }

    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    printf("The minumum and maximum of a 2D array is:\nMAX = %d\nMIN = %d\n:", max, min);
}
#endif

#if 0
// WAP to find the MIN and MAX of a 2D array(in pointer arithmatic way)
int main()
{
    int row, col;
    printf("Enter the row and col : ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    printf("Enter the Elements of 2 D array: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", *(arr + i) + j);
        }
    }
    printf("the Elements of 2 D array: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
    }

    int max = *((*(arr + 0)) + 0);
    int min = *((*(arr + 0)) + 0);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < *((*(arr + i)) + j))
            {
                max = *((*(arr + i)) + j);
            }
            if (min > *((*(arr + i)) + j))
            {
                min = *((*(arr + i)) + j);
            }
        }
    }
    printf("\nThe minumum and maximum of a 2D array is:\nMAX = %d\nMIN = %d\n:", max, min);
}
#endif

#if 0
// WAP to find the MIN and MAX of a 2D array(using functions )
// int Max_and_min(int row, int col, int arr[row][col]);
int Max_and_min(int arr[][col], int row);
int main()
{
    int row, col;
    printf("Enter the row and col : ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    printf("Enter the Elements of 2 D array: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the Elements of 2 D array: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    // Max_and_min(row, col, arr);
    Max_and_min(arr, row);
}
// int Max_and_min(int row, int col, int arr[row][col])
int Max_and_min(int arr[][col], int row)
{
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    printf("The minumum and maximum of a 2D array is:\nMAX = %d\nMIN = %d\n:", max, min);
}
#endif

#if 0
#define row 2
#define col 3
int Max_and_min(int arr[][col], int r);
int main()
{
    /*int row, col;
    printf("Enter the row and col : ");
    scanf("%d %d", &row, &col);*/
    int arr[row][col];
    printf("Enter the Elements of 2 D array: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the Elements of 2 D array: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }

    Max_and_min(arr, row);
}

int Max_and_min(int arr[][col], int r)
{
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    printf("The minumum and maximum of a 2D array is:\nMAX = %d\nMIN = %d\n:", max, min);
}
#endif

#if 0
#include <stdio.h>
#define ROWS 3
#define COLS 3

// function to fill matrix
void fillMatrix(int m[][COLS], int rows)
{
    int val = 1;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < COLS; j++)
            m[i][j] = val++;
}

// function to print matrix
void printMatrix(int m[][COLS], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }
}

// function to find sum
int sumMatrix(int m[][COLS], int rows)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < COLS; j++)
            sum += m[i][j];
    return sum;
}

// function using pointer arithmetic
void printWithPointer(int m[][COLS], int rows)
{
    printf("Pointer arithmetic:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%4d", *(*(m + i) + j));
        printf("\n");
    }
}

int main()
{
    int matrix[ROWS][COLS];

    fillMatrix(matrix, ROWS);

    printf("Matrix:\n");
    printMatrix(matrix, ROWS);

    printf("\nSum = %d\n", sumMatrix(matrix, ROWS));

    printf("\n");
    printWithPointer(matrix, ROWS);

    return 0;
}
#endif

#if 0
/*Q1. Declare and Print
Declare a 3×3 static 2D array. Fill it with values 1 to 9. Print it as a matrix.
Expected Output:
1 2 3
4 5 6
7 8 9*/

int main()
{
    int arr[3][3];
    printf("Filling the values from 1 to 9: ");
    int c = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(arr + i) + j) = c++;
        }
    }
    printf("Printing the values:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", (*(*(arr + i) + j)));
        }
        printf("\n");
    }
}
#endif

#if 0
// Declare a 3×3 matrix filled with values 1 to 9. Find and print sum of all elements.
int main()
{
    int arr[3][3];
    printf("Filling the values from 1 to 9: ");
    int c = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(arr + i) + j) = c++;
        }
    }
    printf("Printing the values:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", (*(*(arr + i) + j)));
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + *(*(arr + i) + j);
        }
    }
    printf("The sum of all elements: %d\n", sum);
}
#endif

#if 0
/*Q4. Row Sum and Column Sum
Declare a 3×3 matrix. Find sum of each row and each column separately.
Expected Output:
Row 0 sum = 6
Row 1 sum = 15
Row 2 sum = 24
Col 0 sum = 12
Col 1 sum = 15
Col 2 sum = 18*/
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    printf("expected out put:");
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("\nRow %d sum = %d", i, sum);
    }
    sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[j][i];
        }
        printf("\nCol %d sum = %d", i, sum);
    }
}
#endif

#if 0
// Write a function to transpose a square N×N matrix in-place
int transpose_matrix(int **ptr, int row, int col);
#include <stdlib.h>
int main()
{
    int row;
    int col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of col: ");
    scanf("%d", &col);
    int **ptr;
    ptr = malloc(row * sizeof(int));
    for (int i = 0; i < col; i++)
    {
        ptr[i] = malloc(col * sizeof(int));
    }
    printf("Read The Elements: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", *(ptr + i) + j);
        }
    }
    printf("The Before Transpose of matrix Elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    transpose_matrix(ptr, row, col);
    return 0;
}
int transpose_matrix(int **ptr, int row, int col)
{
    printf("The transpose of matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", (*(*(ptr + j) + i)));
        }
        printf("\n");
    }
}
#endif

#if 0
// Write a program to create a struct Employee with nested struct Address. Dynamically allocate an array of 5
//employees and sort them by salary.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// nested struct
struct Address
{
    char city[20];
    int pincode;
};

// main struct
struct Employee
{
    char name[20];
    int salary;
    struct Address addr;
};

int main()
{
    // dynamic allocation for 5 employees
    struct Employee *emp = malloc(5 * sizeof(struct Employee));

    // input
    for(int i = 0; i < 5; i++)
    {
        printf("Enter name, salary, city, pincode:\n");

        scanf("%s", emp[i].name);
        scanf("%d", &emp[i].salary);
        scanf("%s", emp[i].addr.city);
        scanf("%d", &emp[i].addr.pincode);
    }

    // sorting (simple bubble sort)
    for(int i = 0; i < 5; i++)
    {
        for(int j = i+1; j < 5; j++)
        {
            if(emp[i].salary > emp[j].salary)
            {
                struct Employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    // output
    printf("\nSorted Employees by Salary:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%s %d %s %d\n",
               emp[i].name,
               emp[i].salary,
               emp[i].addr.city,
               emp[i].addr.pincode);
    }

    free(emp);
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
