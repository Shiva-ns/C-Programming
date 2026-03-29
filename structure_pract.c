#include <stdio.h>
#if 0

struct Student
{
    int id;
    char name[20];
    char address[60];
};
int main()
{
    struct Student s1;
    s1.id = 10;
    return 0;
}

#endif

#if 0
struct student
{
    int id;            // 4 bytes. (Highest Alignment Requirement = 4)
    char name[20];     // 20 bytes.
    char address[60];  // 60 bytes.
                       // Total used: 84 bytes.
                       // 84 is divisible by 4 (highest alignment), so NO padding is added.
};

int main()
{
    struct student s1;
    printf("%zu\n", sizeof(struct student));
    printf("%zu\n", sizeof(s1));
    return 0;
}
#endif

#if 0
#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    char address[60];
};
int main()
{
    struct Student s1;
    s1.id = 10;
    printf("The output = %d\n", s1.id);
    return 0;
}

#endif

#if 0
struct student
{
    int id;
    char name[20];
    char address[30];
};

int main()
{
    struct student s1 = {101, "shiva", "bangalore"};
    printf("\nID: %d", s1.id);
    printf("\nName: %s", s1.name);
    printf("\nAddress: %s", s1.address);
}

#endif

#if 0
#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    char address[60];
};
int main()
{
    struct Student s1 = {10, "Tingu", "Bangalore"};
    struct Student s2;
    s2 = s1;
    printf("\nID: %d", s2.id);
    printf("\nName: %s", s2.name);
    printf("\nAddress: %s", s2.address);
    return 0;
}
#endif

#if 0
#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    char address[60];
};
int main()
{
    struct Student s1 = {10, "Tingu", "Bangalore"};
    printf("Struture starts at % p\n", &s1);
    printf("Member id is at % p\n", &s1.id);
    printf("Member name is at % p\n", s1.name);
    printf("Member address is at % p\n", s1.address);
    return 0;
}
#endif

#if 0
// structure pointers
#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    char address[60];
};
static struct Student s1 = {101, "shiva", "bangalore"};
int main()
{
    struct Student *sptr = &s1;
    printf("the size of structure pointer is = %d\n", sizeof(sptr));
    printf("ID = %d\n", sptr->id);
    printf("name = %s\n", sptr->name);
    printf("Address = %s\n", sptr->address);
    return 0;
}

#endif

#if 0
#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    char address[60];
};
static struct Student s1;
int main()
{
    struct Student *sptr = &s1;
    //(*sptr).id=10;
    // Use the arrow operator '->' for pointers to structures
    sptr->id = 10;
    printf("ID assigned via pointer: %d\n", sptr->id);
    return 0;
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
