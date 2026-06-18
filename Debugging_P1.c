#if 0
/*Q 1
#include <stdio.h>
int main() {
int a = 2, b = 3, c = 4;
int result = a + b * c - 1;
printf("%d\n", result);
return 0;
}
Expected Output:
13*/

#include <stdio.h>
int main()
{
    int a = 2, b = 3, c = 4;
    int result = a + (b * c) - 1; // Parentheses make the multiplication order explicit
    printf("%d\n", result);
    return 0;
}
#endif
//............................................................

#if 0
/*#include <stdio.h>
int main() {
int x = 5;
printf("%d %d %d\n", x, x++, ++x);
return 0;
}
Expected Output:
7 5 7*/
#include <stdio.h>
int main()
{
    int x = 5;

    // To get exactly "7 5 7", we capture the post-increment first
    int val_middle = x++; // x is 5, captures 5, then x becomes 6
    int val_right = ++x;  // x becomes 7, captures 7
    int val_left = x;     // final value is 7

    printf("%d %d %d\n", val_left, val_middle, val_right);

    return 0;
}
#endif
//............................................................

#if 0
/*Q 3
#include <stdio.h>
int main() {
int a = 7, b = 2;
float result = a / b;
printf("%.2f\n", result);
return 0;
}
Expected Output:
3.50
*/
#include <stdio.h>
int main()
{
    int a = 7, b = 2;
    float result = (float)a / b;
    printf("%.2f\n", result);
    return 0;
}
#endif
//............................................................

#if 0
/*#include <stdio.h>
int main() {
int arr[5] = {1,2,3,4,5};
int len = sizeof(arr) / sizeof(arr[1]);
printf("%d\n", len);
return 0;
}
Expected Output:
5*/
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[1]); //(5*4)/4 = 5
    printf("%d\n", len);
    return 0;
}
#endif
//............................................................

#if 0
/*#include <stdio.h>
int main() {
int x = 10;
if (x = 5) {
printf("x is ten\n");
} else {
printf("x is not ten\n");
}
return 0;
}
Expected Output:
x is ten*/
#include <stdio.h>
int main()
{
    int x = 10;
    if (x = 5)
    {
        printf("x is ten\n");
    }
    else
    {
        printf("x is not ten\n");
    }
    return 0;
}
#endif
//............................................................

#if 0
/*#include <stdio.h>
int main() {
int i;
for (i = 1; i < 5; i++) {
printf("%d ", i);
}
printf("\n");
return 0;
}
Expected Output:
1 2 3 4 5*/
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

#endif
//............................................................

#if 0
/*Q 7
#include <stdio.h>
int main() {
int a = -7, b = 3;
printf("%d\n", a % b);
return 0;
}
Expected Output:
-1*/
#include <stdio.h>
int main()
{
    int a = -7, b = 3;
    printf("%d\n", a % b);
    return 0;
}

#endif
//............................................................

#if 0
/*Q 8
#include <stdio.h>
int main() {
int x = 2;
switch(x) {
case 1: printf("one\n");
case 2: printf("two\n");
case 3: printf("three\n");
default: printf("other\n");
}
return 0;
}
Expected Output:
two*/

#include <stdio.h>
int main()
{
    int x = 2;
    switch (x)
    {
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    default:
        printf("other\n");
    }
    return 0;
}

#endif
//............................................................

#if 0
/*Q 9
#include <stdio.h>
int main() {
int x;
int y = x + 10;
printf("%d\n", y);
return 0;
}
Expected Output:
10*/
#include <stdio.h>
int main()
{
    int x = 0;
    int y = x + 10;
    printf("%d\n", y);
    return 0;
}
#endif
//............................................................

#if 0
/*#include <stdio.h>
int main() {
float f = 3.14;
printf("%d\n", f);
return 0;
}
Expected Output:
3.140000*/
#include <stdio.h>
int main()
{
    float f = 3.14;
    printf("%f\n", f);
    return 0;
}
#endif
//............................................................

#if 0
/*Q 11
#include <stdio.h>
int main() {
int a = 5, b = 3;
if (a > 2 & b > 1) {
printf("both true\n");
}
return 0;
}
Expected Output:
both true*/
#include <stdio.h>
int main()
{
    int a = 5, b = 3;
    if (a > 2 & b > 1)
    {
        printf("both true\n");
    }
    return 0;
}
#endif
//............................................................

#if 0
/*Q 12
#include <stdio.h>
int main() {
int arr[3] = {10, 20, 30};
for (int i = 0; i <= 3; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
Expected Output:
10 20 30
*/
#include <stdio.h>
int main()
{
    int arr[3] = {10, 20, 30};
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
#endif
//............................................................

#if 0
/*Q 13
#include <stdio.h>
int main() {
char s[4] = {'H','e','l','o'};
printf("%s\n", s);
return 0;
}
Expected Output:
Helo*/
#include <stdio.h>
int main()
{
    char s[5] = {'H', 'e', 'l', 'o', '\0'};
    printf("%s\n", s);
    return 0;
}
#endif
//............................................................

#if 0
/*Q 14
#include <stdio.h>
int main() {
int x = 42;
int *p = &x;
printf("%d\n", p);
return 0;
}
Expected Output:
42
*/
#include <stdio.h>
int main()
{
    int x = 42;
    int *p = &x;
    printf("%d\n", *p);
    return 0;
}
#endif
//............................................................

#if 0
/*#include <stdio.h>
int main() {
int *p;
{
int temp = 100;
p = &temp;
}
printf("%d\n", *p);//temp's lifetime ends at the closing brace. p becomes a dangling pointer
return 0;
}
Expected Output:
100
*/
#include <stdio.h>
int main()
{
    int *p;
    {
        int temp = 100;
        p = &temp;
        printf("%d\n", *p);
    }
    p = NULL;
    return 0;
}
#endif
//............................................................

#if 0
/*Q 16
#include <stdio.h>
int main() {
int *p = 0;
*p = 55;
printf("%d\n", *p);
return 0;
}
Expected Output:
55*/
#include <stdio.h>
int main()
{
    int *p = 0;
    int val;
    p = &val;
    *p = 55;
    printf("%d\n", *p);
    return 0;
}
#endif
//............................................................

#if 0
/*Q 17
#include <stdio.h>
int main() {
unsigned int x = 1;
printf("%u\n", x << 3);
return 0;
}
Expected Output:
8*/
//.................................................
#include <stdio.h>
int main()
{
    unsigned int x = 1;
    printf("%u\n", x << 3);
    return 0;
}

#endif
// ############################################################//

#if 0
/*Q 18
#include <stdio.h>
int main() {
int x = 5;
printf("%d\n", ~x);
return 0;
}
Expected Output:
-6
*/
//............................
#include <stdio.h>
int main()
{
    int x = 5;
    printf("%d\n", ~x);//use formula ~x = -(x+1)
    return 0;
}
#endif
// ###########################################################//

#if 0
/*Q 19
#include <stdio.h>
int main() {
int a = 3, b = 7;
a ^= b;
b ^= a;
a ^= b;
printf("%d %d\n", a, b);
return 0;
}
Expected Output:
7 3*/
//............................
#include <stdio.h>
int main()
{
    int a = 3, b = 7;
    a ^= b;
    b ^= a;
    a ^= b;
    printf("%d %d\n", a, b);
    return 0;
}
#endif
// ###########################################################//

#if 0
/*Q 20
#include <stdio.h>
int main() {
int x = 2147483647;
x = x + 1;
printf("%d\n", x);
return 0;
}
Expected Output:
-2147483648*/
//............................
#include <stdio.h>
int main()
{
    unsigned int x = 2147483647;
    x = x + 1;
    printf("%u\n", x);
    return 0;
}
#endif
// ###########################################################//

#if 0
/*#include <stdio.h>
#include <string.h>
int main() {
char s1[] = "hello";
char s2[] = "hello";
if (s1 == s2) {
printf("equal\n");
} else {
printf("not equal\n");
}
return 0;
}
Expected Output:
equal*/
//............................
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "hello";
    char s2[] = "hello";
    printf("the return of strcmp= %d\n", strcmp(s1, s2)); // if both same = 0, different = -1
    if (!(strcmp(s1, s2)))
    {
        printf("equal\n");
    }
    else
    {
        printf("not equal\n");
    }
    return 0;
}
#endif
// ###########################################################//

#if 0
/*#include <stdio.h>
#include <string.h>
int main() {
char dest[3];
strcpy(dest, "Hello");//over flow
printf("%s\n", dest);
return 0;
}
Expected Output:
Hello*/
//............................
#include <stdio.h>
#include <string.h>
int main()
{
    char dest[6];
    strcpy(dest, "Hello");
    printf("%s\n", dest);
    return 0;
}
#endif
// ###########################################################//

#if 0
/*Q 23
#include <stdio.h>
#include <string.h>
int main() {
char *s = "Hello World";// it is an char ptr so always 8 bytes based on OS 64 bit.
printf("%lu\n", sizeof(s));
return 0;
}
Expected Output:
11*/
//............................
#include <stdio.h>
#include <string.h>
int main()
{
    // char *s = "Hello World";
    char s[] = "HelloWorld";
    printf("%zu\n", sizeof(s)); // %zu is the standard specifier for size_t (sizeof)
    return 0;
}
#endif
// ###########################################################//

#if 0
/*Q 24
#include <stdio.h>
#include <string.h>
int main() {
char str[] = "one,two,three";
char *token = strtok(str, ",");
while (token != 0) {
printf("%s\n", token);
token = strtok(0, ",");
}
return 0;
}
Expected Output:
one
two
three
*/
//............................
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "one,two,three";
    char *token = strtok(str, ",");
    while (token != 0)
    {
        printf("%s\n", token);
        token = strtok(0, ",");
    }
    return 0;
}

#endif
// ###########################################################//

#if 0
/*Q 25
#include <stdio.h>
#include <string.h>
int main() {
char dest[10] = "Hello";
strcat(dest, " World!");
printf("%s\n", dest);
return 0;
}
Expected Output:
Hello World!*/
//............................
#include <stdio.h>
#include <string.h>
int main()
{
    char dest[10] = "Hello";
    strcat(dest, " World!");
    printf("%s\n", dest);
    return 0;
}
#endif
// ###########################################################//

#if 0
/*Q 35
#include <stdio.h>
#include <stdlib.h>
int main() {
int *arr = (int*)malloc(1000000000 * sizeof(int));
arr[0] = 5;
printf("%d\n", arr[0]);
free(arr);
return 0;
}
Expected Output:
5*/
//............................

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Requesting 1 billion integers (approx 4GB) is very likely to fail on most systems.
    // A NULL check is crucial here to prevent a segmentation fault.
    int *arr = (int *)malloc(1000000000 * sizeof(int)); 
    if (arr == NULL) {
        fprintf(stderr, "Error: Memory allocation failed for 1 billion integers. Exiting.\n");
        return 1; // Indicate an error
    }
    arr[0] = 5;
    printf("%d\n", arr[0]);
    free(arr);
    return 0;
}

#endif
// ###########################################################//

#if 0
/*#include <stdio.h>
int main() {
int *p;
{
int arr[3] = {1,2,3};
p = arr;
}
printf("%d\n", p[0]);
return 0;
}
Expected Output:
1
*/
//............................
#include <stdio.h>
int main()
{
    int *p;
    {
        int arr[3] = {1, 2, 3};
        p = arr;
    }
    printf("%d\n", p[0]);
    return 0;
}
#endif
// ###########################################################//

#if 0
/*#include <stdio.h>
int main() {
int a = -1;
unsigned int b = 1;
if (a < b) {
printf("a is smaller\n");
} else {
printf("a is NOT smaller\n");
}
return 0;
}
Expected Output:
a is smaller*/
//............................
#include <stdio.h>
int main()
{
    int a = -1;
    unsigned int b = 1;
    if (a < b)
    {
        printf("a is smaller\n");
    }
    else
    {
        printf("a is NOT smaller\n");
    }
    return 0;
}
#endif
// ###########################################################//

#if 0
/*#include <stdio.h>
int (*ops[4])(int,int);
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int dvd(int a,int b){return b?a/b:0;}
int main(){
ops[0]=add; ops[1]=sub; ops[2]=mul; ops[3]=dvd;
printf("%d %d %d %d\n",
ops[0](10,3),ops[1](10,3),
ops[2](10,3),ops[3](10,3));
return 0;
}
Expected Output:
13 7 30 3
*/
//............................
#include <stdio.h>
int (*ops[4])(int, int);
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int dvd(int a, int b) { return b ? a / b : 0; }
int main()
{
    ops[0] = add;
    ops[1] = sub;
    ops[2] = mul;
    ops[3] = dvd;
    printf("%d %d %d %d\n",
           ops[0](10, 3), ops[1](10, 3),
           ops[2](10, 3), ops[3](10, 3));
    return 0;
}
#endif
// ###########################################################//

#if 0
/*#include <stdio.h>
#include <stdlib.h>

// No changes to return value
int alloc(add parameters) {
    //write code here
        return 1;
}

int main() {
    int *p = (int*)0;
    if (alloc(*add parameters) == 1) {
        printf("Allocation successful\n");
        printf("*p = %d\n", *p); // Expected output: *p = 100;
        free(p);
        printf("Memory deallocation successful\n");
    }
    return 0;
}*/
//............................
#include <stdio.h>
#include <stdlib.h>

// No changes to return value
int alloc(int **ptr)
{
    // write code here
    *ptr = malloc(sizeof(int));
    **ptr = 100;
    if (ptr == NULL)
    {
        printf("Memory is not allocated.");
        return 0;
    }
    return 1;
}

int main()
{
    int *p = (int *)0;
    if (alloc(&p) == 1)
    {
        printf("Allocation successful\n");
        printf("*p = %d\n", *p); // Expected output: *p = 100;
        free(p);
        printf("Memory deallocation successful\n");
    }
    return 0;
}

#endif
// ###########################################################//

#if 0
// Expected Output : 10 0 30 0 50 0
//............................
#include <stdio.h>
#include <stdlib.h>
// Returns pointer to modified array (same array, no new alloc)
int *keepEven(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((*(arr + i)) % 2 != 0) // write bitwise condition: odd index?
            arr[i] = 0;
    }
    return arr;
    // write code here (return the array pointer)
}
int main()
{
    int a[] = {10, 21, 30, 43, 50, 67};
    int n = 6;
    int *res = keepEven(a, n);
    for (int i = 0; i < n; i++)
        printf("%d ", res[i]);
    printf("\n");
    return 0;
}

#endif
// ###########################################################//

#if 0
/*Q3
Task: Complete the rowSum function that receives a pointer-to-array, fills the sums[] array, and fix the
wrong loop bound.
Concepts: Concepts: 2D array | pointer to array | row-sum | missing loop body
Expected Output:
Row 0 sum = 10
Row 1 sum = 26
Row 2 sum = 42*/
//............................
#include <stdio.h>
// ptr is pointer to array of 4 ints
void rowSum(int (*ptr)[4], int sums[], int rows)
{

    for (int i = 0; i < rows; i++)
    { /* fix this line */
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += *(*(ptr + i) + j);
        }
        sums[i] = sum;
        // write code here (sum all 4 columns of row i into sums[i])
    }
}
int main()
{
    int mat[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int sums[3];
    rowSum(mat, sums, 3);
    for (int i = 0; i < 3; i++)
        printf("Row %d sum = %d\n", i, sums[i]);
    return 0;
}

#endif
// ###########################################################//

#if 0
/*Q4
Task: Fix the parameter, complete the body that finds the longest string in an array of char pointers.
Concepts: Concepts: array of pointers | string | strlen | missing null terminator check

Expected Output:
Longest: watermelon*/
//............................
#include <stdio.h>
#include <string.h>
// No change to return type
char *longest(char *arr[], int len)
{
    char *best = arr[0]; // write: start with first element
    int lon;
    for (int i = 1; i < len; i++)
    {
        if ((strlen(best)) < (strlen(*(arr + i))));
        {
            best = *(arr + i);
        }
        // write: loop condition
        // write code here (compare lengths, update best)
    }
    return best;
}
int main()
{
    char *words[] = {"apple", "water", "figgggggggggg", "blueb"}; // array of pointer for string
    printf("Longest: %s\n", longest(words, 4));
    return 0;
}
#endif
// ###########################################################//

#if 0
// ############################################################//
#if 0
Task: Allocate a Student on the heap via a pointer, fill the fields using ->, print, then free. Fix wrong
member access operator and missing free.
Concepts: struct pointer | malloc | member access via arrow | missing free
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
char name[50];
int age;
float gpa;
} Student;
Student* createStudent(/* add parameters: name, age, gpa */) {
Student *s = (Student*)malloc(/* ??? */); // write correct size
// write code here (copy name, set age, set gpa using -> operator)
return s;
}
void printStudent(/* add parameter */) {
printf("Name : %s\n", s.name); /* fix this line (wrong operator) */
printf("Age : %d\n", s.age); /* fix this line */
printf("GPA : %.2f\n", s.gpa); /* fix this line */
}
int main() {
Student *s = createStudent("Alice", 20, 3.85f);
printStudent(s);
// write code here (free s)
return 0;
}
Expected Output:
Name : Alice
Age : 20
GPA : 3.85
#endif
// ############################################################//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[50];
    int age;
    float gpa;
} Student; // aliase as data type by type def
Student *createStudent(char *nam, int ag, float gp)
{
    Student *s = (Student *)malloc(sizeof(Student));
    strcpy(s->name, nam);
    s->age = ag;
    s->gpa = gp;
    return s;
}
void printStudent(Student *s)
{
    printf("Name : %s\n", s->name); /* fix this line (wrong operator) */
    printf("Age : %d\n", s->age);   /* fix this line */
    printf("GPA : %.2f\n", s->gpa); /* fix this line */
}
int main()
{
    Student *s = createStudent("Alice", 20, 3.85f);
    printStudent(s);
    free(s); // write code here (free s)
    return 0;
}
#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
Task: Fix the wrong sizeof in malloc, complete the loop that initialises an array of Point structs, fix the
wrong printf format.
Concepts: array of structs | single ptr | loop | wrong sizeof | missing init
#include <stdio.h>
#include <stdlib.h>
typedef struct { int x; int y; } Point;
Point* makePoints(int n) {
    Point *pts = (Point*)malloc(n * sizeof(int));  /* fix this line */
    for (int i = 0; i < n; i++) {
        pts[i].x = /* ??? */;   // write: i * 10
        pts[i].y = /* ??? */;   // write: i * 10 + 5
    }
    return pts;
}
void printPoints(Point *pts, int n) {
    for (int i = 0; i < n; i++)
        printf("Point[%d] = (%f, %d)\n", i, pts[i].x, pts[i].y);  /* fix this line */
}
int main() {
    int n = 4;
    Point *arr = makePoints(n);
    printPoints(arr, n);
    free(arr);
    return 0;
}
Expected Output:
Point[0] = (0, 5)
Point[1] = (10, 15)
Point[2] = (20, 25)
Point[3] = (30, 35)

#endif
// ############################################################//
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int x;
    int y;
} Point;
Point *makePoints(int n)
{
    Point *pts = (Point *)malloc(n * sizeof(Point));
    for (int i = 0; i < n; i++)
    {
        pts[i].x = i * 10;
        pts[i].y = pts[i].x + 5;
    }
    return pts;
}
void printPoints(Point *pts, int n)
{
    for (int i = 0; i < n; i++)
        printf("Point[%d] = (%d, %d)\n", i, pts[i].x, pts[i].y);
}
int main()
{
    int n = 4;
    Point *arr = makePoints(n);
    printPoints(arr, n);
    free(arr);
    return 0;
}
#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
Task: Complete the cloneEmployee function (deep copy), fix the shallow-copy bug, add missing flag check
using bitwise.
Concepts: ptr to struct | struct copy vs ptr copy | bitwise flag field | missing deep logic
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FLAG_ACTIVE 0x01
#define FLAG_MANAGER 0x02
#define FLAG_REMOTE 0x04
typedef struct {
    char  name[40];
    int   id;
    unsigned char flags;
} Employee;
Employee* cloneEmployee(/* add parameter */) {
    Employee *copy = (Employee*)malloc(sizeof(Employee));
    // write code here  (copy all fields from src to copy)
    return copy;
}
void printFlags(Employee *e) {
    printf("%s flags: ", e->name);
    if (e->flags /* ??? */ FLAG_ACTIVE)  printf("ACTIVE ");   // write bitwise check
    if (e->flags /* ??? */ FLAG_MANAGER) printf("MANAGER ");
    if (e->flags /* ??? */ FLAG_REMOTE)  printf("REMOTE ");
    printf("\n");
}
int main() {
    Employee orig = {"Bob", 101, FLAG_ACTIVE | FLAG_REMOTE};
    Employee *copy = cloneEmployee(/* ??? */);
    copy->flags |= FLAG_MANAGER;     // add MANAGER to copy only
    printFlags(&orig);
    printFlags(copy);
    free(copy);
    return 0;
}
Expected Output:
Bob flags: ACTIVE REMOTE
Bob flags: ACTIVE MANAGER REMOTE

#endif
// ############################################################//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FLAG_ACTIVE 0x01
#define FLAG_MANAGER 0x02
#define FLAG_REMOTE 0x04
typedef struct
{
    char name[40];
    int id;
    unsigned char flags;
} Employee;
Employee *cloneEmployee(/* add parameter */)
{
    Employee *copy = (Employee *)malloc(sizeof(Employee));
    // write code here  (copy all fields from src to copy)
    return copy;
}
void printFlags(Employee *e)
{
    printf("%s flags: ", e->name);
    if (e->flags /* ??? */ FLAG_ACTIVE)
        printf("ACTIVE "); // write bitwise check
    if (e->flags /* ??? */ FLAG_MANAGER)
        printf("MANAGER ");
    if (e->flags /* ??? */ FLAG_REMOTE)
        printf("REMOTE ");
    printf("\n");
}
int main()
{
    Employee orig = {"Bob", 101, FLAG_ACTIVE | FLAG_REMOTE};
    Employee *copy = cloneEmployee(/* ??? */);
    copy->flags |= FLAG_MANAGER; // add MANAGER to copy only
    printFlags(&orig);
    printFlags(copy);
    free(copy);
    return 0;
}
#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
Task: Fix the parameter list, fill in the allocation logic, and correct main so that *p = 100 after the call.
Concepts: Concepts: single pointer | dynamic allocation | passing ptr-to-ptr
#include <stdio.h>
#include <stdlib.h>
// No changes to return type
int alloc(/* add parameters */) {
// write code here (allocate memory, store 100, return 1 on success)
return 1;
}
int main() {
int *p = NULL;
if (alloc(/* add arguments */) == 1) {
printf("*p = %d\n", *p);
free(p);
}
return 0;
}
Expected Output:
*p = 100
#endif
// ############################################################//
#include <stdio.h>
#include <stdlib.h>
// No changes to return type
int alloc(int **p1)
{
    *p1 = malloc(sizeof(int));
    // write code here (allocate memory, store 100, return 1 on success)
    if (*p1 == NULL)
    {
        printf("Menory is not allocated");
    }
    **p1 = 100;
    return 1;
}
int main()
{
    int *p = NULL;
    if (alloc(&p) == 1)
    {
        printf("*p = %d\n", *p);
        free(p);
    }
    return 0;
}
#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#include <stdio.h>
#include <string.h>
// No change to return type
char* longest(char *arr[], /* add parameter for count */) {
char *best = /* ??? */; // write: start with first element
for (int i = 1; i < /* ??? */; i++) { // write: loop condition
// write code here (compare lengths, update best)
}
return best;
}
int main() {
char *words[] = {"apple", "watermelon", "fig", "blueberry"};
printf("Longest: %s\n", longest(words, 4));
return 0;
}
Expected Output:
Longest: watermelon
#endif
// ############################################################//
#include <stdio.h>
#include <string.h>
// No change to return type
char *longest(char *arr[], int n)
{
    char *best = NULL; // write: start with first element
    int len = 0;
    for (int i = 1; i < n; i++)
    {
        if ((strlen(arr[i])) > len)
        {
            len = strlen(arr[i]);
            best = arr[i];
        }
    }
    return best;
}
int main()
{
    char *words[] = {"apple", "watermelon", "fig", "blueberry"};
    printf("Longest: %s\n", longest(words, 4));
    return 0;
}

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
Concepts: Concepts: function pointer | 1D array | map operation | wrong return type
#include <stdio.h>
void mapArray(int *arr, int n, /* add function pointer parameter */) {
// write code here (apply fn to each element in-place)
}
int doubleVal(int x) { return x * 2; }
int squareVal(int x) { return x * x; }
int main() {
int a[] = {1, 2, 3, 4, 5};
mapArray(a, 5, doubleVal);
for (int i = 0; i < 5; i++)
printf("%f ", a[i]); /* fix this line */
printf("\n");
int b[] = {1, 2, 3, 4, 5};
mapArray(b, 5, squareVal);
for (int i = 0; i < 5; i++)
printf("%d ", b[i]);
printf("\n");
return 0;
}
Expected Output:
2 4 6 8 10
1 4 9 16 25
#endif
// ############################################################//
#include <stdio.h>

int doubleVal(int x)
{
    return x * 2;
}
int squareVal(int x)
{
    return x * x;
}
void mapArray(int *arr, int n, int (*ptr)(int))
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = ptr(arr[i]);
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};// 'a' is an auto array, allocated on the stack
    mapArray(a, 5, doubleVal);
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    int b[] = {1, 2, 3, 4, 5};// 'b' is an auto array, allocated on the stack
    mapArray(b, 5, squareVal);
    for (int i = 0; i < 5; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
#endif
// ------------------------------- --------------------------------//

#if 0
#include <stdio.h>
// ############################################################//
#if 0
#include <stdio.h>
// Sets bit 'bit' in every element of the array
void setBitAll(/* add parameters */) {
for (int i = 0; i < n; i++) {
arr[i] = arr[i] | /* ??? */; // write: correct mask to set bit 'bit'
}
}
// Clears bit 'bit' in every element
void clearBitAll(/* add parameters */) {
for (int i = 0; i < n; i++) {
arr[i] = arr[i] && ~(1 << bit); /* fix this line */
}
}
int main() {
int a[] = {0, 0, 0, 0};
setBitAll(a, 4, 3); // set bit 3 -> each becomes 8
for (int i=0;i<4;i++) printf("%d ", a[i]);
printf("\n");
clearBitAll(a, 4, 3); // clear bit 3 -> each becomes 0
for (int i=0;i<4;i++) printf("%d ", a[i]);
printf("\n");
return 0;
}
Expected Output:
8 8 8 8
0 0 0 0
#endif
// ############################################################//
#include <stdio.h>
// Sets bit 'bit' in every element of the array
void setBitAll(int *arr, int n, int bit)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] | (1 << bit); // write: correct mask to set bit 'bit'
    }
}
// Clears bit 'bit' in every element
void clearBitAll(int *arr, int n, int bit)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] & ~(1 << bit);
    }
}
int main()
{
    int a[] = {0, 0, 0, 0};
    setBitAll(a, 4, 3); // set bit 3 -> each becomes 8
    for (int i = 0; i < 4; i++)
        printf("%d ", a[i]);
    printf("\n");
    clearBitAll(a, 4, 3); // clear bit 3 -> each becomes 0
    for (int i = 0; i < 4; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#include <stdio.h>
#include <string.h>
void sayHello() { printf("Hello, World!\n"); }
void sayBye() { printf("Goodbye!\n"); }
void sayHelp() { printf("Commands: hello, bye, help\n"); }
// Fill: array of 3 function pointers (no parameters, void return)
void (*cmds[3])() = { /* write code here */ };
char *names[] = {"hello", "bye", "help"};
void execute(char *input) {
for (int i = 0; i < 3; i++) {
if (/* write code here */ == 0) { // compare input with names[i]
// write code here (call the matching function pointer)
return;
}
}
printf("Unknown command\n");
}
int main() {
execute("hello");
execute("help");
execute("bye");
execute("run");
return 0;
}
Expected Output:
Hello, World!
Commands: hello, bye, help
Goodbye!
Unknown command
#endif
// ############################################################//
#include <stdio.h>
#include <string.h>
void sayHello() { printf("Hello, World!\n"); }
void sayBye() { printf("Goodbye!\n"); }
void sayHelp() { printf("Commands: hello, bye, help\n"); }
// Fill: array of 3 function pointers (no parameters, void return)
void (*cmds[3])(void) = {sayHello, sayBye, sayHelp};
const char *names[] = {"hello", "bye", "help"};
void execute(char *input)
{
    for (int i = 0; i < 3; i++)
    {

        if (strcmp(input, names[i]) == 0) // compare input with names[i]
        {
            cmds[i]();
            return;
        }
    }
    printf("Unknown command\n");
}
int main()
{
    execute("hello");
    execute("help");
    execute("bye");
    execute("run");
    return 0;
}
#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
Concepts: Concepts: single ptr | 1D array | bubble sort | missing swap | wrong condition
#include <stdio.h>
void bubbleSort(int *arr, int n) {
for (int i = 0; i < n; i++) { /* fix: outer loop bound */
for (int j = 0; j < n - i; j++) { /* fix: inner loop bound */
if (arr[j] > arr[j+1]) {
// write code here (swap arr[j] and arr[j+1])
}
}
}
}
int main() {
int a[] = {64, 25, 12, 22, 11};
bubbleSort(a, 5);
for (int i = 0; i < 5; i++)
printf("%d ", a[i]);
printf("\n");
return 0;
}
Expected Output:
11 12 22 25 64
#endif
// ############################################################//
#include <stdio.h>

void bubbleSort(int *arr, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        int swapped = 0;
       
        for (size_t j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}
int main()
{
    int a[] = {64, 25, 12, 22, 11};
    bubbleSort(a, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
Task: Add the correct parameter types, allocate memory correctly, complete the deep-copy logic.
Concepts: Concepts: multiple pointers | string copy | missing malloc | wrong strlen
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Returns a newly allocated copy of src
char* deepCopy(/* add parameters */) {
char *dst = (char*)malloc(strlen(src)); /* fix this line */
// write code here (copy src into dst)
return dst;
}
int main() {
char *orig = "DebugMaster";
char *copy = deepCopy(orig);
copy[0] = 'd'; // modify copy – must NOT affect orig
printf("orig = %s\n", orig);
printf("copy = %s\n", copy);
free(copy);
return 0;
}
Expected Output:
orig = DebugMaster
copy = debugMaster
#endif
// ############################################################//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Returns a newly allocated copy of src
char *deepCopy(char *src) // Text Segment | Function: external linkage
{
    // Heap Segment | Concept: Dynamic Allocation | Allocate memory for string + '\0'
    char *dst = (char *)malloc(strlen(src) + 1);
    if (dst == NULL)
        return NULL; // Concept: Null pointer check | Handle allocation failure

    strcpy(dst, src); // Concept: String Copy | Copy data from ROData to Heap

    return dst; // Returning heap address
}
int main() // Text Segment | Function: Entry point
{
    char *orig = "DebugMaster";  // Stack (ptr) | ROData (string) | Concept: String Literal
    char *copy = deepCopy(orig); // Stack (ptr) | Concept: Function call returning ptr

    if (copy != NULL)
    {
        copy[0] = 'd';               // Concept: Array indexing | Modify heap memory
        printf("orig = %s\n", orig); // ROData | Concept: Format string
        printf("copy = %s\n", copy); // ROData | Output modified copy
        free(copy);                  // Concept: Memory Management | Deallocate heap memory
    }
    return 0; // Exit status
}
#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//

#if 0
// ############################################################//
#if 0
#endif
// ############################################################//

#endif
// ---------------------------------------------------------------//
