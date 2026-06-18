#if 0
// #############
#if 0
Q1–Q10: STORAGE CLASSES (auto, register, static, extern)
Q1
Task: Demonstrate auto vs static local variable. Fix wrong keyword, add missing static counter, fix wrong printf.
Concepts: auto | static local | lifetime | scope
#include <stdio.h>
void counter() {
 register int calls = 0; /* fix this line: should be static, not register */
 calls++;
 auto int temp = calls * 2; /* auto is valid but redundant; keep as is */
 printf("Call #%d, temp=%d\n", calls, temp);
}
int main() {
 counter();
 counter();
 counter();
 return 0;
}
Expected Output:
Call #1, temp=2
Call #2, temp=4
Call #3, temp=6

#endif
// #############
#include <stdio.h>
void counter()
{
    static int calls = 0;
    calls++;
    auto int temp = calls * 2; 
    printf("Call #%d, temp=%d\n", calls, temp);
}
int main()
{
    counter();
    counter();
    counter();
    return 0;
}
#endif
//-------------------------------------------------------------------------

#if 0
// #############
#if 0
 register variable in inner loop for performance hint. Fix: taking address of register variable, wrong loop bound, missing
output.
Concepts: register | cannot take address | loop
#include <stdio.h>
int dotProduct(int *a, int *b, int n)
 {
     register int sum = 0;
     register int i;
     int *ptr = &i;           /* fix this line: cannot take address of register variable; remove this line */
     for (i = 0; i <= n; i++) /* fix this line: off-by-one, should be < n */
         sum += a[i] * b[i];
     return sum;
 }
 int main()
 {
     int a[] = {1, 2, 3, 4};
     int b[] = {5, 6, 7, 8};
     printf("Dot product: %d\n", dotProduct(a, b, 4));
     return 0;
 }
 Expected Output : Dot product : 70

#endif
// #############
#include <stdio.h>
int dotProduct(int *a, int *b, int n)
{
    register int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i] * b[i];
    return sum;
}
int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    printf("Dot product: %d\n", dotProduct(a, b, 4));
    return 0;
}

#endif
//-------------------------------------------------------------------------

#if 0
// #############
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FLAG_ACTIVE 0x01
#define FLAG_MANAGER 0x02
#define FLAG_REMOTE 0x04
typedef struct {
char name[40];
int id;
unsigned char flags;
} Employee;
Employee* cloneEmployee(/* add parameter */) {
Employee *copy = (Employee*)malloc(sizeof(Employee));
// write code here (copy all fields from src to copy)
return copy;
}
void printFlags(Employee *e) {
printf("%s flags: ", e->name);
if (e->flags /* ??? */ FLAG_ACTIVE) printf("ACTIVE "); // write bitwise check
if (e->flags /* ??? */ FLAG_MANAGER) printf("MANAGER ");
if (e->flags /* ??? */ FLAG_REMOTE) printf("REMOTE ");
printf("\n");
}
int main() {
Employee orig = {"Bob", 101, FLAG_ACTIVE | FLAG_REMOTE};
Employee *copy = cloneEmployee(/* ??? */);
copy->flags |= FLAG_MANAGER; // add MANAGER to copy only
printFlags(&orig);
printFlags(copy);
free(copy);
return 0;
}
#endif
// #############
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
    // write code here (copy all fields from src to copy)
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
//-------------------------------------------------------------------------

#if 0

// #############
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char city[30];
    int pop;
} City;
City **buildCities(char *names[], int pops[], int n)
{
    City **arr = (City **)malloc(n * sizeof(City)); /* fix this line */
    for (int i = 0; i < n; i++)
    {
        arr[i] = (City *)malloc(sizeof(City));
        strcpy(arr[i]->city, names[i]);
        arr[i].pop = pops[i]; /* fix this line */
    }
    return arr;
}
void printCities(City **arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%-15s population: %d\n", arr[i]->city, arr[i]->pop);
}
void freeCities(/* add parameters */)
{
    for (int i = 0; i < n; i++)
        free(arr[i]);
    // write code here (free the outer pointer array)
}
int main()
{
    char *names[] = {"Mumbai", "Delhi", "Chennai"};
    int pops[] = {20667656, 32941309, 10971108};
    City **cities = buildCities(names, pops, 3);
    printCities(cities, 3);
    freeCities(cities, 3);
    return 0;
}
Expected Output : Mumbai population : 20667656 Delhi population : 32941309 Chennai population : 10971108
#endif
// #############
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char city[30];
    int pop;
} City;
City **buildCities(char *names[], int pops[], int n)
{
    City **arr = (City **)malloc(n * sizeof(City *)); /* Fixed: Allocate space for pointers, not structs */
    for (int i = 0; i < n; i++)
    {
        arr[i] = (City *)malloc(sizeof(City));
        strcpy(arr[i]->city, names[i]);
        arr[i]->pop = pops[i]; /* Fixed: Use arrow operator for pointers */
    }
    return arr;
}
void printCities(City **arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%-15s population: %d\n", arr[i]->city, arr[i]->pop);
}
void freeCities(City **arr, int n)
{
    for (int i = 0; i < n; i++)
        free(arr[i]);
    free(arr); /* Fixed: Added free for the outer pointer array */
}
int main()
{
    char *names[] = {"Mumbai", "Delhi", "Chennai"};
    int pops[] = {20667656, 32941309, 10971108};
    City **cities = buildCities(names, pops, 3);
    printCities(cities, 3);
    freeCities(cities, 3);
    return 0;
}

#endif
//-------------------------------------------------------------------------

#if 0

// #############
#if 0
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
int data;
struct Node *next;
} Node;
Node* insertFront(Node *head, int val) {
Node *n = (Node*)malloc(sizeof(Node));
n->data = /* ??? */; // write: store val
n->next = /* ??? */; // write: point to current head
// write code here (return new node as new head)
}
void printList(Node *head) {
Node *cur = head;
while (cur != NULL) {
printf("%d ", cur->data);
cur = cur; /* fix this line (must advance pointer) */
}
printf("\n");
}
void freeList(/* add parameter */) {
while (head) {
Node *tmp = head;
// write code here (advance head, free tmp)
}
}
int main() {
Node *list = NULL;
for (int i = 1; i <= 5; i++) list = insertFront(list, i);
printList(list);
freeList(list);
return 0;
}
Expected Output:
5 4 3 2 1
#endif
// #############
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *insertFront(Node *head, int val)
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = val;  
    n->next = NULL; 

    n->next = head;
    return n;
}
void printList(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}
void freeList(Node *head)
{
    while (head)
    {
        Node *tmp = head;
        head = head->next;
        free(tmp);
    }
    // free(tmp);
}
int main()
{
    Node *list = NULL;
    for (int i = 1; i <= 5; i++)
        list = insertFront(list, i);
    printList(list);
    freeList(list);
    return 0;
}
#endif
//-------------------------------------------------------------------------

#if 0
// #############
#if 0
Q53
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
char name[40];
int id;
unsigned char flags;
} Employee;
Employee* cloneEmployee(/* add parameter */) {
Employee *copy = (Employee*)malloc(sizeof(Employee));
// write code here (copy all fields from src to copy)
return copy;
}
void printFlags(Employee *e) {
printf("%s flags: ", e->name);
if (e->flags /* ??? */ FLAG_ACTIVE) printf("ACTIVE "); // write bitwise check
if (e->flags /* ??? */ FLAG_MANAGER) printf("MANAGER ");
if (e->flags /* ??? */ FLAG_REMOTE) printf("REMOTE ");
printf("\n");
}
int main() {
Employee orig = {"Bob", 101, FLAG_ACTIVE | FLAG_REMOTE};
Employee *copy = cloneEmployee(/* ??? */);
copy->flags |= FLAG_MANAGER; // add MANAGER to copy only
printFlags(&orig);
printFlags(copy);
free(copy);
return 0;
}
Expected Output:
Bob flags: ACTIVE REMOTE
Bob flags: ACTIVE MANAGER REMOTE
#endif
// #############
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
Employee *cloneEmployee(Employee *orig)
{
    Employee *copy = (Employee *)malloc(sizeof(Employee));
    // write code here (copy all fields from src to copy)
    if (copy != NULL)
    {
        *copy = *orig;
    }
    return copy;
}
void printFlags(Employee *e)
{
    printf("%s flags: ", e->name);
    if (e->flags & FLAG_ACTIVE)
        printf("ACTIVE "); // write bitwise check
    if (e->flags & FLAG_MANAGER)
        printf("MANAGER ");
    if (e->flags & FLAG_REMOTE)
        printf("REMOTE ");
    printf("\n");
}
int main()
{
    // 0x01      0x04
    Employee orig = {"Bob", 101, FLAG_ACTIVE | FLAG_REMOTE};
    Employee *copy = cloneEmployee(&orig);
    copy->flags |= FLAG_MANAGER; // add MANAGER to copy only  -> 0x07
    printFlags(&orig);
    printFlags(copy);
    free(copy);
    return 0;
}
#endif
//-------------------------------------------------------------------------

#if 0
// #############
#if 0
Task: Fill the comparator that sorts by score descending, fix wrong sizeof in qsort, fill the print loop.
Concepts: struct array | fn ptr | sort by field | missing comparator body | wrong qsort size
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct { char name[30]; int score; } Player;
int cmpDesc(const void *a, const void *b) {
Player *pa = (Player*)a;
Player *pb = (Player*)b;
// write code here (return value for descending sort by score)
}
void printPlayers(Player *arr, int n) {
for (/* write code here */)
printf("%-15s %d\n", arr[/* ??? */].name, arr[/* ??? */].score);
}
int main() {
Player players[] = {
{"Alice",88}, {"Bob",95}, {"Carol",72}, {"Dan",95}, {"Eve",80}
};
int n = 5;
qsort(players, n, sizeof(int), cmpDesc); /* fix this line */
printPlayers(players, n);
return 0;
}
Expected Output:
Bob 95
Dan 95
Alice 88
Eve 80
Carol 72
#endif
// #############
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[30];
    int score;
} Player;
int cmpDesc(const void *a, const void *b)
{
    Player *pa = (Player *)a;
    Player *pb = (Player *)b;
    // write code here (return value for descending sort by score)
}
void printPlayers(Player *arr, int n)
{
    for (/* write code here */)
        printf("%-15s %d\n", arr[/* ??? */].name, arr[/* ??? */].score);
}
int main()
{
    Player players[] = {
        {"Alice", 88}, {"Bob", 95}, {"Carol", 72}, {"Dan", 95}, {"Eve", 80}};
    int n = 5;
    qsort(players, n, sizeof(int), cmpDesc); /* fix this line */
    printPlayers(players, n);
    return 0;
}
#endif
//-------------------------------------------------------------------------

#if 0
// #############
#if 0
#include <stdio.h>
int factorial(int n) {
 if (n <= 1) {
 static int callCount = 0; /* fix this line: static must be outside if block */
 return 0; /* fix this line: base case should return 1 */
 }
 static int callCount = 0;
 // write code here (increment callCount, then printf "Call #%d\n" callCount)
 return n * factorial(n - 1);
}
int main() {
 printf("5! = %d\n", factorial(5));
 return 0;
}
Expected Output:
Call #1
Call #2
Call #3
Call #4
5! = 120

#endif
// #############
#include <stdio.h>
int factorial(int n)
{
    static int callCount = 0;
    if (n <= 1)
    {
        return 1;
    }
    callCount++;
    printf("Call #%d\n", callCount);
    return n * factorial(n - 1);
}
int main()
{
    printf("5! = %d\n", factorial(5));
    return 0;
}
#endif
//-------------------------------------------------------------------------

#if 0
// #############
#if 0
Concepts: register | cannot take address | loop
#include <stdio.h>
int dotProduct(int *a, int *b, int n) {
 register int sum = 0;
 register int i;
 int *ptr = &i; /* fix this line: cannot take address of register variable; remove this line */
 for (i = 0; i <= n; i++) /* fix this line: off-by-one, should be < n */
 sum += a[i] * b[i];
 return sum;
}
int main() {
 int a[] = {1, 2, 3, 4};
 int b[] = {5, 6, 7, 8};
 printf("Dot product: %d\n", dotProduct(a, b, 4));
 return 0;
}
Expected Output:
Dot product: 70
#endif
// #############
#include <stdio.h>
int dotProduct(int *a, int *b, int n)
{
    register int sum = 0;
    register int i;
    
    for (i = 0; i < n; i++)
        sum += a[i] * b[i];
    return sum;
}
int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    printf("Dot product: %d\n", dotProduct(a, b, 4));
    return 0;
}
#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------

#if 0
//#############
#if 1
#endif
//#############

#endif
//-------------------------------------------------------------------------
