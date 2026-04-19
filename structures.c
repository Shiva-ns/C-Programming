#include <stdio.h>

#if 0
// Create structure to store student details
/*ID: Unique integer identifier (e.g., roll number).
Name: Character array for full name (size 50-100 chars).
Age: Integer for age.
Email: Character array for contact email.
Marks/GPA: Float or double for academic score.
Optional additions: Department (char array), phone (long int).*/
struct students
{
    int ID;
    char name[20];
    int age;
    char email[30];
    float marks;
    char department[50];
};

int main()
{
    struct students s1 = {8188, "shiva", 25, "shivareddyns280@gmail.com", 50.99, "Electricals"};
    printf("The ID = %d\n", s1.ID);
    printf("The name = %s\n", s1.name);
    printf("The age = %d\n", s1.age);
    printf("The mail = %s\n", s1.email);
    printf("The marks = %f\n", s1.marks);
    printf("The department = %s\n", s1.department);
}

#endif

#if 0
// Store and display employee details using structure
struct emplpoy
{
    // int employee;
    int ID;
    char name[50];
    float salary;
};

int main()
{
    /* struct emplpoy employee1;
     struct emplpoy employee2;
     printf("Enter the Detalis of employ 1 : ");
     printf("\nEnter ID: ");
     scanf("%d", &employee1.ID);
     printf("Enter Name: ");
     scanf("%s", employee1.name);
     printf("Enter Salary: ");
     scanf("%f", &employee1.salary);

     printf("Enter the Detalis of employ 2 : ");
     printf("\nEnter ID: ");
     scanf("%d", &employee2.ID);
     printf("Enter Name: ");
     scanf("%s", employee2.name);
     printf("Enter Salary: ");
     scanf("%f", &employee2.salary);*/
    struct emplpoy employee1 = {101, "Shiva", 500};
    struct emplpoy employee2 = {102, "Shiva", 500};
    printf("Employee details ...............................\n");
    printf("Employee 1\n");
    printf("ID = %d", employee1.ID);
    printf("\nName = %s", employee1.name);
    printf("\nSalary = %f", employee1.salary);
    printf("\nEmployee 2\n");
    printf("ID = %d", employee2.ID);
    printf("\nName = %s", employee2.name);
    printf("\nSalary = %f", employee2.salary);
}

#endif

#if 0
#include <string.h>
struct std
{
    int id;
    int marks;
    char name[20];
};
int main()
{
    struct std s1 = {100, 40, "shiva"};
    struct std s2;
    s2.id = 200;
    s2.marks = 50;
   // s2.name = "shiva";
    strcpy(s2.name, "shiva");
    // strcpy(s2.name, "reddy");
    // printf("Read studnet 2 name : ");
    // scanf("%s", s2.name);

    printf("ID : %d\n", s1.id);
    printf("Marks : %d\n", s1.marks);
    printf("Name : %s\n", s1.name);

    printf("\nID : %d\n", s2.id);
    printf("Marks : %d\n", s2.marks);
    printf("Name : %s\n", s2.name);
}
#endif

#if 0
#include <string.h>
int main()
{
    char str[10];
    printf("%s", str);
    strcpy(str, "shiva");
    // str = "reddy";//which gives undifine behaviour

    printf("%s", str);
}

#endif

#if 0
// using loop student details
struct std
{
    int ID;
    char name[30];
    char address[40];
};

int main()
{
    struct std s1[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the student - %d details : ", i);
        printf("\nEnter ID: ");
        scanf("%d", &s1[i].ID);
        printf("Enter the name: ");
        scanf("%s", s1[i].name);
        printf("Enter the address: ");
        scanf("%s", s1[i].address);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d details: ", i);
        printf("ID : %d\n", s1[i].ID);
        printf("name: %s\n", s1[i].name);
        printf("address : %s\n", s1[i].address);
    }
}

#endif

#if 0
// designated initialization
struct abc
{
    int a;
    int b;
    int c;
};
int main()
{
    struct abc x = {.a = 20, .b = 30, .c = 40};
    // x = {.a = 20, .b = 30, .c = 40};error
    printf("a = %d , b = %d , c = %d\n", x.a, x.b, x.c);
}
#endif

#if 0
struct abc
{
    int x;
    int y;
};

int main()
{
    struct abc a = {2, 3};
    struct abc *ptr = &a;
    printf("the x= %d & Y= %d\n", ptr->x, ptr->y);
}

#endif

#if 0
// Pass by Value
#include <stdio.h>
struct Student
{
    int id;
    char name[30];
    char address[150];
};
void data(struct Student s)
{
    s.id = 10;
}
int main()
{
    struct Student s1; // local var and it is allocated on the stack with in main fun
    data(s1);          // here passing the entaire value of the structure.
    printf("The std id is : %d\n", s1.id);
    return 0;
}

#endif

#if 0
// Pass by Reference
#include <stdio.h>
struct Student
{
    int id;
    char name[30];
    char address[150];
};
void data(struct Student *s)
{
    (*s).id = 10;
    // s->id = 10;
}
int main()
{
    struct Student s1; // local var and it is allocated on the stack with in main fun
    data(&s1);         // here passing the memory address of the structure.
    printf("The std id is : %d\n", s1.id);
    return 0;
}

#endif

#if 0
#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int id;
    char *name;
    char *address;
};
struct Student data(void)
{
    struct Student s;
    s.name = (char *)malloc(30 * sizeof(char));
    if (s.name == NULL)
        exit(1);

    s.address = (char *)malloc(150 * sizeof(char));
    if (s.address == NULL)
    {
        free(s.name);
        exit(1);
    }

    return s;
}
int main()
{
    struct Student s1;
    s1 = data();

    // Clean up memory before exiting
    free(s1.name);
    free(s1.address);
    return 0;
}
#endif

#if 0
/*107. [P]
Write a program to create a struct Employee with nested struct Address. Dynamically allocate an array of 5
employees and sort them by salary.*/
#include <stdlib.h>
#include <stdio.h>

struct Address
{

    char add[50];
    char state[20];
    int pin;
};

struct Employee
{
    int id;
    char name[40];
    float salary;
    struct Address addr;
};
void swap_salary(struct Employee *empp, int size)
{
    struct Employee temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (empp[i].salary > empp[j].salary)
            {
                temp = empp[i];
                empp[i] = empp[j];
                empp[j] = temp;
            }
        }
    }
}
int main()
{
    struct Employee *emp;
    emp = (struct Employee *)malloc(5 * sizeof(struct Employee));
    if (emp == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the details of employee - %d\n", i + 1);
        printf("ID ");
        scanf("%d", &emp[i].id);
        printf("Name ");
        scanf("%s", emp[i].name);
        printf("Salary ");
        scanf("%f", &emp[i].salary);
        printf("Address ");
        scanf("%s", emp[i].addr.add);
        printf("State ");
        scanf("%s", emp[i].addr.state);
        printf("Pin ");
        scanf("%d", &emp[i].addr.pin);
    }
    printf("\n");
    printf("Before swaping : ");
    for (int i = 0; i < 5; i++)
    {
        printf("the details of employee - %d\n", i + 1);
        printf("ID %d\n", emp[i].id);
        printf("Name %s\n", emp[i].name);
        printf("Salary %f\n", emp[i].salary);
        printf("Address %s\n", emp[i].addr.add);
        printf("State %s\n", emp[i].addr.state);
        printf("Pin %d\n", emp[i].addr.pin);
        printf("\n");
    }
    swap_salary(emp, 5);
    printf("\n");
    printf("After swaping : ");
    for (int i = 0; i < 5; i++)
    {
        printf("the details of employee - %d\n", i + 1);
        printf("ID %d\n", emp[i].id);
        printf("Name %s\n", emp[i].name);
        printf("Salary %f\n", emp[i].salary);
        printf("Address %s\n", emp[i].addr.add);
        printf("State %s\n", emp[i].addr.state);
        printf("Pin %d\n", emp[i].addr.pin);
        printf("\n");
    }
    free(emp);
    return 0;
}

#endif

#if 0
/*Create a structure Book:

title
price

👉 Find the costliest book.*/
struct book
{
    char title[50];
    int price;
};
struct book costliest_book(struct book *b, int s);
int main()
{
    struct book books[5];
    printf("Enter the books name:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Book %d", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Prince: ");
        scanf("%d", &books[i].price);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Book%d\n", i + 1);
        printf("Title: %s", books[i].title);
        printf("\nPrince: %d", books[i].price);
        printf("\n");
    }
    printf(" the costliest book is %s\n", (costliest_book(books, 5)).title);
    // printf("Cost %d",(costliest_book(books, 5)).title);
}

struct book costliest_book(struct book *b, int s)
{
    struct book temp;
    int high = b[0].price;
    int index = 0;
    int i;
    for (i = 0; i < s; i++)
    {
        if (high < b[i].price)
        {
            temp = b[i];
            index = i;
        }
    }
    return b[index];
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
