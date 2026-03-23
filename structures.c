#include <stdio.h>

#if 1
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
