#include <stdio.h>
#if 0
-->In C, a Union is a special data type that allows you to store different data types in the same memory location. While a struct allocates separate memory for each of its members, a union allocates only enough memory to hold its largest member. All members share that same memory space.

Key Concepts of Unions
1.Memory Sharing: Because all members share the same space, you can only store a value in one member at a time. Assigning a value to one member overwrites whatever was stored in the others.
2.Size: The size of a union is determined by the size of its largest member.
3.Use Case: Unions are typically used for memory conservation or for interpreting the same bit pattern in multiple ways (e.g., hardware registers or network packets).

#endif
#if 1
union Test
{
    char option;
    int id;
    double height;
};
int main()
{
    union Test temp_var;
    temp_var.height = 7.2;
    temp_var.id = 0x1234;
    temp_var.option = '1';
    printf("height = %f\n", temp_var.height);
    printf("id = %d\n", temp_var.id);
    printf("option = %c\n", temp_var.option);
    return 0;
}

#endif
#if 0
union std
{
    int id;
    float marks;
};

int main()
{
    union std s;

    s.id = 101; //The 4 bytes of memory are filled with the integer representation of 101
    s.marks = 80; //The exact same 4 bytes are overwritten with the IEEE 754 floating-point representation of 80.0. The value 101 is now gone.

    printf("ID is = %d\n", s.id);
    printf("Marks is = %f\n", s.marks);
}
#endif

#if 0
int main()
{
    int a = 10;
    float b = 20;
    printf("%f\n", a);//o/p - 0.000000
    printf("%f\n", b);//o/p - 20.000000
    printf("%d\n", b); // o/p - 0  this tells printf to interpret the IEEE 754 floating-point bit pattern of 20.0 as if it were a standard integer. This will not print 20; it will print a large, seemingly random integer.
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
