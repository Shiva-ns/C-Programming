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
/*Create a structure Employee:

id
salary

👉 Count how many employees have salary > 30,000*/

struct Employee
{
    int id;
    int salary;
};

int salary(struct Employee *emp, int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (emp[i].salary > 30000)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    struct Employee emp[5]; // local variable-stack
    printf("Enter the Employee salaries:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Employee %d\n", i + 1);
        printf("id: ");
        scanf("%d", &emp[i].id);
        printf("Salary: ");
        scanf("%d", &emp[i].salary);
    } // function parameters -> salary(emp, 5)-stack seg
    printf("the total %d employees have salary > 30,000 ", salary(emp, 5));
}

#endif

#if 0
/*Pass a structure to function:
👉 Create Rectangle

length, breadth

👉 Function to return area*/

struct rectangle
{
    int length;
    int breadth;
};

int calculateArea(struct rectangle r)
{
    return r.length * r.breadth;
}
int main()
{
    struct rectangle rect;
    printf("Enter the length: ");
    scanf("%d", &rect.length);
    printf("Enter the breadth: ");
    scanf("%d", &rect.breadth);
    int area = calculateArea(rect);
    printf("The Area of rectangle is %d\n", area);
}

#endif

#if 0
#include <stdio.h>
/*Create function:

input_student()
display_student()

Use structure Student*/

struct students // Blueprint: 0 bytes (Template for compiler)
{
    int ID;        // 4 bytes
    char name[50]; // 50 bytes
    int marks;     // 4 bytes (+ 2 bytes padding for alignment)
} std[3];          // BSS Segment: 180 bytes (60 bytes * 3)

void input_student();   // Declaration: Metadata for compiler
void display_student(); // Declaration: Metadata for compiler
int main()              // START OF TEXT SEGMENT: Machine code for main logic starts here
{
    input_student();
    display_student();
    return 0;
}

void input_student() // TEXT SEGMENT: Binary instructions for this function stored here
{
    for (int i = 0; i < 3; i++) // Stack Segment: 'i' takes 4 bytes
    {
        printf("Student %d\n", i + 1); // TEXT SEGMENT: Stores string literal "Student %d\n"
        printf("ID: ");
        scanf("%d", &std[i].ID); // Modifies BSS Segment memory
        printf("Name: ");
        scanf("%s", std[i].name); // Modifies BSS Segment memory
        printf("marks: ");
        scanf("%d", &std[i].marks); // Modifies BSS Segment memory
    }
}
void display_student() // Text Segment (Instructions)
{
    printf("\nThe student data :\n"); // Text Segment: RO String Literal
    for (int i = 0; i < 3; i++)       // Stack Segment: 'i' takes 4 bytes
    {
        printf("Student %d\n", i + 1);
        printf("ID: %d\n", std[i].ID);       // Reads from BSS Segment
        printf("Name: %s\n", std[i].name);   // Reads from BSS Segment
        printf("marks: %d\n", std[i].marks); // Reads from BSS Segment
    }
}
#endif

#if 0
#include <stdlib.h>
/*Dynamically allocate memory for 5 students using malloc
Read and print using pointer*/
typedef struct student                               // Blueprint (0 bytes in RAM)
{
    int id;                                          // 4 bytes
    char name[50];                                   // 50 bytes (+ 2 bytes padding for 4-byte alignment)
} alias;                                             // Total size per struct: ~56 bytes

void s_read(alias *stdd)                             // Text Segment (Instructions)
{
    printf("Enter the student data: ");              // Text Segment (RO String Literal)
    for (int i = 0; i < 3; i++)                      // Stack Segment: 'i' (4 bytes)
    {
        printf("Student %d\n", i + 1);               // Text Segment (RO String Literal)
        printf("ID: ");                              // Text Segment (RO String Literal)
        scanf("%d", &(stdd + i)->id);                // Writes to Heap Segment
        printf("Name: ");                            // Text Segment (RO String Literal)
        scanf("%49s", (stdd + i)->name);             // Writes to Heap Segment (Safe limit)
    }
}

void s_print(alias *stdd)                            // Text Segment (Instructions)
{
    printf("The student data:\n");                   // Text Segment (RO String Literal)
    for (int i = 0; i < 3; i++)                      // Stack Segment: 'i' (4 bytes)
    {
        printf("\nStudent %d\n", i + 1);             // Text Segment (RO String Literal)
        printf("ID: %d\n", (stdd + i)->id);          // Reads from Heap Segment
        printf("Name: %s\n", (stdd + i)->name);      // Reads from Heap Segment
    }
}

int main()                                           // Text Segment (Instructions)
{
    alias *std;                                      // Stack Segment: Pointer variable (8 bytes on 64-bit)
    std = (alias *)malloc(3 * sizeof(alias));        // Heap Segment: Allocates ~168 bytes (56 * 3)

    if (std == NULL) return 1;                       // Error handling for malloc
    s_read(std);                                     // Function call (pushes address to Stack)
    s_print(std);                                    // Function call (pushes address to Stack)
    free(std);                                       // Releases Heap memory
    std = NULL;                                      // Best practice: dangling pointer safety
    return 0;                                        // Stack Segment: return value
}

#endif

#if 0
/*👉 Create structure with pointer inside:

struct Student {
    char *name;
    int marks;
};

👉 Allocate memory for name dynamically*/
#include <stdlib.h>
#include <string.h>
struct Student
{
    char *name;                             // 8 bytes (pointer to a memory address)
    int marks;                              // 4 bytes (+ 4 bytes padding for alignment)
};                                          // Total: 16 bytes (Blueprint in Text Segment)

int main()
{
    struct Student *std;                    // Stack Segment: 8 bytes (stores a memory address)

    // 1. Allocate the struct itself on the Heap
    std = malloc(sizeof(struct Student));   // Heap Segment: 16 bytes allocated
    if (std == NULL)
        return 1;

    // 2. Allocate the name string on the Heap
    std->name = malloc(20 * sizeof(char));  // Heap Segment: 20 bytes allocated
    if (std->name == NULL)
    {
        free(std);
        return 1;
    }

    // strcpy copies "shiva" from Text Segment (Literal) to the Heap Segment buffer
    strcpy(std->name, "shiva");             // Text Segment: literal "shiva" (~6 bytes)
    std->marks = 20;                        // Modifies 4 bytes in the Heap Segment

    printf("the name : %s\n", (*std).name); // Text Segment: Format string literal
    printf("The marks: %d\n", (*std).marks);

    // 3. Clean up (Releases Heap Segment memory)
    free(std->name);                        // Frees the 20-byte heap buffer
    free(std);                              // Frees the 16-byte heap struct
    return 0;
}

#endif

#if 0
/*13.

Create:

struct Address {
    city;
    pin;
};

struct Employee {
    name;
    struct Address addr;
};

👉 Read and print*/
#include <stdlib.h>
struct Address
{
    char city[40];
    int pin;
};

struct Employee
{
    char name[40];
    struct Address addr;
};

int main()
{
    struct Employee *emp; // Stack: 8 bytes (pointer)
    // Heap Allocation: ~176 bytes (2 structs * 88 bytes each)
    emp = (struct Employee *)malloc(2 * sizeof(struct Employee));

    if (emp == NULL)
        return 1; // Error handling

    printf("Read the data:\n"); // Text: RO String Literal
    for (int i = 0; i < 2; i++)
    {
        printf("\nThe Employee %d\n", i + 1);
        printf("Name: ");
        // Use . because emp[i] is the struct itself
        fgets((emp + i)->name, sizeof((emp + i)->name), stdin);

        printf("City: ");
        fgets((emp + i)->addr.city, sizeof((emp + i)->addr.city), stdin);

        printf("Pin: ");
        scanf("%d", &(emp + i)->addr.pin);

        // Clear newline buffer for the next fgets
        while (getchar() != '\n')
            ;
    }

    for (int i = 0; i < 2; i++)
    {
        printf("The Employee :%d\n", i + 1);
        printf("Name: %s", (emp + i)->name); //(*(emp + i)).name
        printf("City: %s", (emp + i)->addr.city);
        printf("Pin: %d", (emp + i)->addr.pin);
    }

    // Output logic would go here...

    free(emp); // Free Heap memory
    return 0;
}
#endif

#if 0
/*👉 Sort:
by salary
if same → sort by name*/
#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[20];
    int salary;
};

int main()
{
    struct Employee emp[5];
    int i, j;

    // Input
    for (i = 0; i < 5; i++)
    {
        printf("Enter name and salary: ");
        scanf("%s %d", emp[i].name, &emp[i].salary);
    }

    // Sorting
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (emp[i].salary > emp[j].salary)
            {
                struct Employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
            else if (emp[i].salary == emp[j].salary)
            {
                if (strcmp(emp[i].name, emp[j].name) > 0) // if it is true it will return positive number and actually checking about the which is comes first name as per dictionary.
                {
                    struct Employee temp = emp[i];
                    emp[i] = emp[j];
                    emp[j] = temp;
                }
            }
        }
    }

    // Output
    printf("\nSorted Employees:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s %d\n", emp[i].name, emp[i].salary);
    }

    return 0;
}
#endif
#if 0
#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    char designation[20];
    int id;
    float salary;
};

float employee_data(float salary, int option);

int main()
{
    int option;
    struct employee e1, e2, e3, e4; // here we can define multiple variables or we can use struct array

    printf("Enter the number to choose the Employee: 1.Ram, 2.Bheam, 3.sham, 4.sundhar:\n");
    scanf("%d", &option);

    printf("/******************/\n");
    strcpy(e1.name, "Ram");
    strcpy(e1.designation, "Firmware Developer");
    e1.id = 1;

    strcpy(e2.name, "Bheam");
    strcpy(e2.designation, "Hardware Engineer");
    e2.id = 2;

    strcpy(e3.name, "Sham");
    strcpy(e3.designation, "software Engineer");
    e3.id = 3;

    strcpy(e4.name, "Sundhar");
    strcpy(e4.designation, "Firmware Developer");
    e4.id = 4;

    if (option == 1)
    {
        printf("Name:%s\n", e1.name);
        printf("Designation:%s\n", e1.designation);
        printf("ID:%d\n", e1.id);
        e1.salary = employee_data(e1.salary, option);
        printf("Salary:%.3f\n", e1.salary);
    }

    else if (option == 2)
    {

        printf("Name:%s\n", e2.name);
        printf("Designation:%s\n", e2.designation);
        printf("ID:%d\n", e2.id);
        e2.salary = employee_data(e2.salary, option);
        printf("Salary:%.3f\n", e2.salary);
    }

    else if (option == 3)
    {
        printf("Name:%s\n", e3.name);
        printf("Designation:%s\n", e3.designation);
        printf("ID:%d\n", e3.id);
        e3.salary = employee_data(e3.salary, option);
        printf("Salary:%.3f\n", e3.salary);
    }

    else if (option == 4)
    {
        printf("Name:%s\n", e4.name);
        printf("Designation:%s\n", e4.designation);
        printf("ID:%d\n", e4.id);
        e4.salary = employee_data(e4.salary, option);
        printf("Salary:%.3f\n", e4.salary);
    }

    else
    {
        printf("Invalid option\n");
    }

    return 0;
}

float employee_data(float salary, int option)
{
    if (option == 1)
    {
        salary = 35000.650;
        return salary;
    }

    if (option == 2)
    {

        salary = 35000.450;
        return salary;
    }

    if (option == 3)
    {
        salary = 40000.500;
        return salary;
    }

    if (option == 4)
    {
        salary = 50000.600;
        return salary;
    }

    return 0;
}
#endif

#if 0
/*18.

Create a union Data:

int
float
char

👉 Assign values one by one and print
👉 Observe output*/

union data
{
    int id;         // 4 bytes
    int marks;      // 4 bytes
    float amount;   // 4 bytes
    double reg_num; // 8 bytes
    char name[25];  // 25 bytes
}; // Total Size: 32 bytes (due to 8-byte double alignment)

int main() // Text Segment (Instructions)
{
    union data std; // Stack Segment: 32 bytes allocated
    std.id = 20;    // Modifies Stack memory (first 4 bytes)
    // std.amount = 400;
    // std.marks = 80;
    // std.reg_num = 994535;

    // Corrected format specifiers
    printf("the size of union = %zu\n", sizeof(std));
    printf("the data (id): %d\n", std.id); // Correct: 20

    // ISSUE: name is uninitialized and shares memory with id=20
    printf("the data (name): %s\n", std.name);

    printf("the data (marks): %d\n", std.marks); // Shares memory with id, prints 20

    // ISSUE: Interpreting integer 20 bits as a float
    printf("the data (amount): %f\n", std.amount);

    // ISSUE: Interpreting integer 20 bits as a double. Use %f for double.
    printf("the data (reg_num): %f\n", std.reg_num);

    return 0;
}
#endif

#if 0
#include <stdio.h>
#include <string.h>

union employee_data
{
    int id;
    float salary;
    char name[20];
   // double a;
};

int main()
{

    union employee_data e1;

    e1.id = 196;

    printf("After assigning int:\n");
    printf("e1.id = %d\n", e1.id);          // 196
    printf("e1.id address = %p\n", &e1.id); // id address = 0000006a91fffcc0

    e1.salary = 6.5;
    printf("\nAfter assigning float:\n");
    printf("e1.salary = %.2f\n", e1.salary);        // 6.50
    printf("e1.salary address = %p\n", &e1.salary); // salary address = 0000006a91fffcc0 same address
    printf("e1.id = %d (overwritten)\n", e1.id);    // 1087373312 (overwritten)

    strcpy(e1.name, "snehas");
    printf("\nAfter assigning char:\n");
    printf("e1.name = %s\n", e1.name);                     // name = snehas
    printf("e1.name = %p\n", &e1.name);                    // e1.name = 0000006a91fffcc0 same address
    printf("e1.salary = %.2f (overwritten)\n", e1.salary); // 4333837412194284665307136.00 (overwritten)
    printf("The siezof union %zu\n", sizeof(e1));
    return 0;
}
#endif

#if 0
#include <stdio.h>
#include <string.h>

struct meter_data
{
    char status[20];

    union meter_log
    {
        char voltage_log[20];
        char tamper_event[20];
    } log; // <-- union variable name
};

int main()
{
    printf("the size of struct: %zu\n", sizeof(struct meter_data));
    printf("the size of union: %zu\n", sizeof(union meter_log));
    struct meter_data meter1;

    float voltage;
    printf("Enter the voltage to see the status: ");
    scanf("%f", &voltage);

    if (voltage > 3.2 && voltage < 3.4)
    {
        strcpy(meter1.log.voltage_log, "high_voltage");
        strcpy(meter1.status, "first_breath");
    }
    else if (voltage <= 1.8)
    {
        strcpy(meter1.log.voltage_log, "low_voltage");
        strcpy(meter1.status, "last_gasp");
    }

    printf("Meter info:\n");
    printf("Voltage log: %s\n", meter1.log.voltage_log);
    printf("Status: %s\n", meter1.status);

    return 0;
}

#endif

#if 0
union un
{
    short int a;
    char ch[2];
};

int main()
{
    union un u;
    u.ch[0] = 2;
    u.ch[1] = 3;
    printf("a: %d\n", u.a);
}

#endif

#if 0
#include <stdio.h>
#include <string.h>

typedef struct {
    char  name[20];
    int   roll;
    float gpa;
} Student;

int main() {
    Student class[3] = {
        {"Alice",   101, 9.2f},
        {"Bob",     102, 8.5f},
        {"Charlie", 103, 7.8f}
    };

    printf("%-10s %-6s %-5s\n", "Name", "Roll", "GPA");
    printf("─────────────────────\n");
    for (int i = 0; i < 3; i++)
        printf("%-10s %-6d %.1f\n",
               class[i].name,
               class[i].roll,
               class[i].gpa);
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
