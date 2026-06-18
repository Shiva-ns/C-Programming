// ============================================================
// Struct & Union Padding Quiz — 100 Questions
// Platform: 64-bit Linux, GCC defaults
// Pointer size: 8 bytes
// Instructions: Predict the sizeof() / offsetof() output
// To attempt a question: change #if 0 → #if 1
// To mark as done:       change // Yes: 0 → // Yes: 1
// ============================================================

#if 0
#include <stdio.h>
struct Student
{
    char ch1;
    int num;
    char ch2;
};
int main()
{
    struct Student s1;
    printf("% zu\n", sizeof(struct Student));
    return 0;
}
#endif

#if 0
#include <stdio.h>
#pragma pack(1)
struct Student
{
    char ch1;
    int num;
    char ch2;
};
int main()
{
    struct Student s1;
    printf("% zu\n", sizeof(struct Student));
    return 0;
}

#endif

#if 0
#include <stdio.h>
struct A
{
    char a;
    int b;
    char d;
};
int main()
{
    printf("%zu", sizeof(struct A));
}
#endif

#if 0
#include <stdio.h>
struct B
{
    int a;
    char b;
    char c;
};

int main()
{
    printf("%zu", sizeof(struct B)); // optimal
    return 0;
}
#endif

#if 0
#include <stdio.h>

struct C
{
    char a;
    char b;
    char c;
};

int main()
{
    printf("%zu", sizeof(struct C));
    return 0;
}
#endif

#include <stdio.h>
#include <stddef.h>

// ============================================================
// --- Struct Padding ---
// ============================================================

// Q1. [STRUCT] Basic struct
#if 0
struct A
{
    char a;
    int b;
    char c;
};
int main()
{
    printf("%zu", sizeof(struct A));
}
// Yes: 1
#endif

// Q2. [STRUCT] Optimal order
#if 0
struct B
{
    int a;
    char b[30];
    char c;
};
int main()
{
    printf("%zu", sizeof(struct B));
}
// Yes: 1
#endif

// Q3. [STRUCT] All chars
#if 0
struct C {
    char a;
    char b;
    char c;
};
int main() {
    printf("%zu", sizeof(struct C));
}
// Yes: 1
#endif

// Q4. [STRUCT] Double alignment
#if 0
struct D {
    char a;
    double b;
    int c;
};
int main() {
    printf("%zu", sizeof(struct D));
}
// Yes: 1
#endif

// Q5. [STRUCT] short + int
#if 0
struct E {
    short a;
    int b;
    char c;
};
int main() {
    printf("%zu", sizeof(struct E));
}
// Yes: 1
#endif

// Q6. [STRUCT] Two shorts
#if 0
struct F
{
    short a;
    short b;
    int c;
};
int main()
{
    printf("%zu", sizeof(struct F));
}
// Yes: 1
#endif

// Q7. [STRUCT] long long
#if 0
struct G
{
    int a;
    long long b;
    char c;
};
int main()
{
    printf("%zu", sizeof(struct G));
}
// Yes: 1
#endif

// Q8. [STRUCT] Empty struct
#if 0
struct H
{
};
int main()
{
    printf("%zu", sizeof(struct H));
}
// Yes: 1
#endif

// Q9. [STRUCT] Pointer size
#if 0
struct I
{
    char a;
    int *b;
    char c;
};
int main()
{
    printf("%zu", sizeof(struct I));
}
// Yes: 1
#endif

// Q10. [STRUCT] All same type
#if 0
struct J {
    int a;
    int b;
    int c;
};
int main() {
    printf("%zu", sizeof(struct J));
}
// Yes: 1
#endif

// Q11. [STRUCT] char + long long + char
#if 0
struct K {
    char a;
    long long b;
    char c;
};
int main() {
    printf("%zu", sizeof(struct K));
}
// Yes: 1
#endif

// Q12. [STRUCT] Member offset — predict offsetof(struct L, b)
#if 0
struct L
{
    char a;
    char d;
    short s;
    char t;
    int f;
    int b;
    char c;
};
int main()
{
    printf("%zu", offsetof(struct L, c));
}
// Yes: 1
#endif

// Q13. [STRUCT] Array inside
#if 0
struct M
{
    char a;
    int b[3];//even if it is arr also the padding is consider the size of data type
};
int main()
{
    printf("%zu", sizeof(struct M));
}
// Yes: 1
#endif

// Q14. [STRUCT] double + float
#if 0
struct N
{
    double a;
    float b;
    int c;
};
int main()
{
    printf("%zu", sizeof(struct N));
}
// Yes: 1
#endif

// Q15. [STRUCT] float + double
#if 0
struct O
{
    float a;
    double b;
};
int main()
{
    printf("%zu", sizeof(struct O));
}
// Yes: 1
#endif

// ============================================================
// --- Union Sizing ---
// ============================================================

// Q16. [UNION] Basic union
#if 0
union U1
{
    char a;
    int b;
    short c;
};
int main()
{
    printf("%zu", sizeof(union U1));
}
// Yes: 1
#endif

// Q17. [UNION] Union with double
#if 0
union U2
{
    char a;
    double b;
    int c;
};
int main()
{
    printf("%zu", sizeof(union U2));
}
// Yes: 1
#endif

// Q18. [UNION] Union single member
#if 0
union U3
{
    int a;
};
int main()
{
    printf("%zu", sizeof(union U3));
}
// Yes: 1
#endif

// Q19. [UNION] Union all chars
#if 0
union U4
{
    char a;
    char b;
    char c;
};
int main()
{
    printf("%zu", sizeof(union U4));
}
// Yes: 1
#endif

// Q20. [UNION] Union with array
#if 0
union U5
{
    int b;
    char a[10];
};
int main()
{
    printf("%zu", sizeof(union U5));
}
// Yes: 1
#endif

// Q21. [UNION] Union with pointer
#if 0
union U6
{
    char *a;
    int b;
};
int main()
{
    printf("%zu", sizeof(union U6));
}
// Yes: 1
#endif

// Q22. [UNION] Union member offset — predict offsetof(union U7, b)
#if 0
union U7
{
    // char s[8];
    int a;
    short b;
    char c;
};
int main()
{
    printf("%zu", sizeof(union U7));
    printf("\n");
    printf("%zu", offsetof(union U7, a));
}
// Yes: 1
#endif

// Q23. [UNION] Union long long + array
#if 0
union U8
{
    long long a;
    int b[3];
};
int main()
{
    printf("%zu", sizeof(union U8));
}
// Yes: 1
#endif

// Q24. [UNION] Union with nested struct
#if 0
union U9
{
    struct
    {
        int x;
        int y;
    } pt;
    long long val;
};
int main()
{
    printf("%zu", sizeof(union U9));
}
// Yes: 1
#endif

// Q25. [UNION] Union two arrays
#if 0
union U10
{
    char a[9];
    short b[3];
};
int main()
{
    printf("%zu", sizeof(union U10));
}
// Yes: 1
#endif

// ============================================================
// --- #pragma pack ---
// ============================================================

// Q26. [PRAGMA] pack(1) basic
#if 0
#pragma pack(4)
struct P1
{
    char a;
    int b;
    char c;
};
// #pragma pack()
int main()
{
    printf("%zu", sizeof(struct P1));
}
// Yes: 1
#endif

// Q27. [PRAGMA] pack(2)
#if 0
#pragma pack(2)
struct P2
{
    char a;
    int b;
    char c;
};
#pragma pack()
int main()
{
    printf("%zu", sizeof(struct P2));
}
// Yes: 1
#endif

// Q28. [PRAGMA] pack(4) with double
#if 0
#pragma pack(4)
struct P3
{
    char a;
    double b;
    int c;
};
#pragma pack()
int main()
{
    printf("%zu", sizeof(struct P3));
}
// Yes: 1
#endif

// Q29. [PRAGMA] pack(1) double
#if 0
#pragma pack(1)
struct P4
{
    char a;
    double b;
    char c;
};
#pragma pack()
int main()
{
    printf("%zu", sizeof(struct P4));
}
// Yes: 0
#endif

// Q30. [PRAGMA] pack(1) on union
#if 0
#pragma pack(1)
union PU1
{
    char a;
    int b;
};
#pragma pack()
int main()
{
    printf("%zu", sizeof(union PU1));
}
// Yes: 1
#endif

// Q31. [PRAGMA] pack(1) pointer
#if 0
#pragma pack(1)
struct P5 {
    char a;
    int *b;
    char c;
};
#pragma pack()
int main() {
    printf("%zu", sizeof(struct P5));
}
// Yes: 0
#endif

// Q32. [PRAGMA] pack(2) long long
#if 0
#pragma pack(2)
struct P6 {
    char a;
    long long b;
};
#pragma pack()
int main() {
    printf("%zu", sizeof(struct P6));
}
// Yes: 0
#endif

// Q33. [PRAGMA] default vs pack(1) — two sizes printed
#if 0
struct Q1 { char a; int b; };
#pragma pack(1)
struct Q2 { char a; int b; };
#pragma pack()
int main() {
    printf("%zu %zu", sizeof(Q1), sizeof(Q2));
}
// Yes: 0
#endif

// Q34. [PRAGMA] push/pop — two sizes printed
#if 0
#pragma pack(push, 1)
struct P7 {
    char a;
    int b;
};
#pragma pack(pop)
struct P8 {
    char a;
    int b;
};
int main() {
    printf("%zu %zu", sizeof(P7), sizeof(P8));
}
// Yes: 0
#endif

// Q35. [PRAGMA] pack(1) with array
#if 0
#pragma pack(1)
struct P9 {
    char a;
    int b[3];
    char c;
};
#pragma pack()
int main() {
    printf("%zu", sizeof(struct P9));
}
// Yes: 0
#endif

// ============================================================
// --- Nested Structs & Unions ---
// ============================================================

// Q36. [NESTED] Nested struct
#if 0
struct Inner {
    char a;
    int b;
};
struct Outer {
    char x;
    struct Inner y;
    char z;
};
int main() {
    printf("%zu", sizeof(struct Outer));
}
// Yes: 0
#endif

// Q37. [NESTED] Nested struct 2
#if 0
struct S1 { int a; char b; };
struct S2 { char x; struct S1 y; };
int main() {
    printf("%zu", sizeof(struct S2));
}
// Yes: 0
#endif

// Q38. [NESTED] Struct inside union
#if 0
struct Tag {
    int x;
    char y;
};
union Wrap {
    struct Tag t;
    double d;
};
int main() {
    printf("%zu", sizeof(union Wrap));
}
// Yes: 0
#endif

// Q39. [NESTED] Array of structs
#if 0
struct Node {
    char a;
    int b;
};
int main() {
    printf("%zu", sizeof(struct Node[3]));
}
// Yes: 0
#endif

// Q40. [NESTED] Nested unions
#if 0
union Inner2 { char a; short b; };
union Outer2 {
    union Inner2 u;
    int c;
};
int main() {
    printf("%zu", sizeof(union Outer2));
}
// Yes: 0
#endif

// Q41. [NESTED] Deep nesting
#if 0
struct A2 { char x; };
struct B2 { struct A2 a; int b; };
struct C2 { struct B2 b; char c; };
int main() {
    printf("%zu", sizeof(struct C2));
}
// Yes: 0
#endif

// Q42. [NESTED] Flexible array member — FAM (data[]) has 0 size; only int counts
#if 0
struct Flex {
    int len;
    char data[];
};
int main() {
    printf("%zu", sizeof(struct Flex));
}
// Yes: 0
#endif

// ============================================================
// --- Bit Fields ---
// ============================================================

// Q43. [BITFIELD] Basic bitfield
#if 0
struct BF1 {
    unsigned int a : 4;
    unsigned int b : 4;
};
int main() {
    printf("%zu", sizeof(struct BF1));
}
// Yes: 0
#endif

// Q44. [BITFIELD] Bitfield overflow
#if 0
struct BF2 {
    unsigned int a : 20;
    unsigned int b : 20;
};
int main() {
    printf("%zu", sizeof(struct BF2));
}
// Yes: 0
#endif

// Q45. [BITFIELD] Bitfield :0 gap — unnamed :0 forces alignment to next int boundary
#if 0
struct BF3 {
    unsigned int a : 10;
    unsigned int   : 0;
    unsigned int b : 5;
};
int main() {
    printf("%zu", sizeof(struct BF3));
}
// Yes: 0
#endif

// Q46. [BITFIELD] Mixed bitfield + regular
#if 0
struct BF4 {
    int a : 8;
    int b : 8;
    char c;
    int d;
};
int main() {
    printf("%zu", sizeof(struct BF4));
}
// Yes: 0
#endif

// Q47. [BITFIELD] Char bitfield
#if 0
struct BF5 {
    unsigned char a : 3;
    unsigned char b : 3;
    unsigned char c : 3;
};
int main() {
    printf("%zu", sizeof(struct BF5));
}
// Yes: 0
#endif

// ============================================================
// --- Mixed / Advanced ---
// ============================================================

// Q48. [MIXED] pragma pack(1) nested
#if 0
#pragma pack(1)
struct Inner3 { char a; int b; };
struct Outer3 { char x; struct Inner3 y; };
#pragma pack()
int main() {
    printf("%zu", sizeof(struct Outer3));
}
// Yes: 0
#endif

// Q49. [MIXED] sizeof member — predict size of member b (double) inside struct Z1
#if 0
struct Z1 { char a; double b; int c; };
int main() {
    printf("%zu", sizeof(((struct Z1*)0)->b));
}
// Yes: 0
#endif

// Q50. [MIXED] Union of pragma struct
#if 0
#pragma pack(1)
struct PS1 { char a; int b; };
#pragma pack()
union MU {
    struct PS1 s;
    double d;
};
int main() {
    printf("%zu", sizeof(union MU));
}
// Yes: 0
#endif

// Q51. [MIXED] Self-referential pointer
#if 0
struct Node2 {
    int val;
    struct Node2 *next;
};
int main() {
    printf("%zu", sizeof(struct Node2));
}
// Yes: 0
#endif

// Q52. [MIXED] offsetof in packed struct — predict offsetof(struct PO, c)
#if 0
#pragma pack(1)
struct PO {
    char a;
    int b;
    char c;
};
#pragma pack()
int main() {
    printf("%zu", offsetof(struct PO, c));
}
// Yes: 0
#endif

// Q53. [MIXED] Union pack(2) array
#if 0
#pragma pack(2)
union PU2 {
    char a[5];
    int b;
};
#pragma pack()
int main() {
    printf("%zu", sizeof(union PU2));
}
// Yes: 0
#endif

// Q54. [MIXED] sizeof struct == array — prints 1 if true, 0 if false
#if 0
struct S3 { int a; int b; int c; };
int arr[3];
int main() {
    printf("%d", sizeof(struct S3) == sizeof(arr));
}
// Yes: 0
#endif

// Q55. [MIXED] Three-field offsetof — predict offsetof(struct T3, d)
#if 0
struct T3 {
    char a;
    short b;
    int c;
    double d;
};
int main() {
    printf("%zu", offsetof(struct T3, d));
}
// Yes: 0
#endif

// Q56. [MIXED] Packed struct array
#if 0
#pragma pack(1)
struct PA {
    char a;
    int b;
};
#pragma pack()
int main() {
    printf("%zu", sizeof(struct PA[4]));
}
// Yes: 0
#endif

// ============================================================
// --- More Struct Padding ---
// ============================================================

// Q57. [STRUCT] char + short + char
#if 0
struct Q57 {
    char a;
    short b;
    char c;
};
int main() {
    printf("%zu", sizeof(struct Q57));
}
// Yes: 0
#endif

// Q58. [STRUCT] offsetof third field — predict offsetof(struct Q58, c)
#if 0
struct Q58 {
    char a;
    short b;
    int c;
};
int main() {
    printf("%zu", offsetof(struct Q58, c));
}
// Yes: 0
#endif

// Q59. [STRUCT] double at start
#if 0
struct Q59 {
    double a;
    char b;
    char c;
};
int main() {
    printf("%zu", sizeof(struct Q59));
}
// Yes: 0
#endif

// Q60. [STRUCT] long + char + short
#if 0
struct Q60 {
    long a;
    char b;
    short c;
};
int main() {
    printf("%zu", sizeof(struct Q60));
}
// Yes: 0
#endif

// Q61. [STRUCT] Three pointers
#if 0
struct Q61 {
    char *a;
    int  *b;
    void *c;
};
int main() {
    printf("%zu", sizeof(struct Q61));
}
// Yes: 0
#endif

// Q62. [STRUCT] int + char + short + char — predict offsetof last char
#if 0
struct Q62 {
    int   a;
    char  b;
    short c;
    char  d;
};
int main() {
    printf("%zu", offsetof(struct Q62, d));
}
// Yes: 0
#endif

// Q63. [STRUCT] char array + int
#if 0
struct Q63 {
    char a[3];
    int  b;
};
int main() {
    printf("%zu", sizeof(struct Q63));
}
// Yes: 0
#endif

// Q64. [STRUCT] int + double + char + int
#if 0
struct Q64 {
    int    a;
    double b;
    char   c;
    int    d;
};
int main() {
    printf("%zu", sizeof(struct Q64));
}
// Yes: 0
#endif

// Q65. [STRUCT] short array + double
#if 0
struct Q65 {
    short  a[3];
    double b;
};
int main() {
    printf("%zu", sizeof(struct Q65));
}
// Yes: 0
#endif

// Q66. [STRUCT] All long long — three fields
#if 0
struct Q66 {
    long long a;
    long long b;
    long long c;
};
int main() {
    printf("%zu", sizeof(struct Q66));
}
// Yes: 0
#endif

// ============================================================
// --- More Union Sizing ---
// ============================================================

// Q67. [UNION] Union of two structs
#if 0
struct UA { int x; char y; };
struct UB { double p; short q; };
union Q67 {
    struct UA a;
    struct UB b;
};
int main() {
    printf("%zu", sizeof(union Q67));
}
// Yes: 0
#endif

// Q68. [UNION] Union with long long array
#if 0
union Q68 {
    long long a[2];
    char      b[20];
};
int main() {
    printf("%zu", sizeof(union Q68));
}
// Yes: 0
#endif

// Q69. [UNION] Union with function pointer
#if 0
union Q69 {
    void (*fp)(void);
    char  a;
    int   b;
};
int main() {
    printf("%zu", sizeof(union Q69));
}
// Yes: 0
#endif

// Q70. [UNION] Union double + char array — alignment matters
#if 0
union Q70 {
    double a;
    char   b[6];
};
int main() {
    printf("%zu", sizeof(union Q70));
}
// Yes: 0
#endif

// Q71. [UNION] offsetof second member in union
#if 0
union Q71 {
    long long a;
    int       b;
    char      c;
};
int main() {
    printf("%zu", offsetof(union Q71, b));
}
// Yes: 0
#endif

// ============================================================
// --- More Bit Fields ---
// ============================================================

// Q72. [BITFIELD] Single 1-bit field
#if 0
struct Q72 {
    unsigned int flag : 1;
};
int main() {
    printf("%zu", sizeof(struct Q72));
}
// Yes: 0
#endif

// Q73. [BITFIELD] Full int worth of bits
#if 0
struct Q73 {
    unsigned int a : 16;
    unsigned int b : 16;
};
int main() {
    printf("%zu", sizeof(struct Q73));
}
// Yes: 0
#endif

// Q74. [BITFIELD] Bitfield + pointer
#if 0
struct Q74 {
    unsigned int flag : 1;
    int         *ptr;
};
int main() {
    printf("%zu", sizeof(struct Q74));
}
// Yes: 0
#endif

// Q75. [BITFIELD] short bitfield units
#if 0
struct Q75 {
    unsigned short a : 5;
    unsigned short b : 5;
    unsigned short c : 5;
};
int main() {
    printf("%zu", sizeof(struct Q75));
}
// Yes: 0
#endif

// Q76. [BITFIELD] Bitfield then double
#if 0
struct Q76 {
    unsigned int a : 8;
    double       b;
};
int main() {
    printf("%zu", sizeof(struct Q76));
}
// Yes: 0
#endif

// Q77. [BITFIELD] Three int bitfields crossing boundary
#if 0
struct Q77 {
    unsigned int a : 12;
    unsigned int b : 12;
    unsigned int c : 12;
};
int main() {
    printf("%zu", sizeof(struct Q77));
}
// Yes: 0
#endif

// Q78. [BITFIELD] Mixed: char bf + int bf + long long
#if 0
struct Q78 {
    unsigned char  a : 4;
    unsigned int   b : 28;
    long long      c;
};
int main() {
    printf("%zu", sizeof(struct Q78));
}
// Yes: 0
#endif

// ============================================================
// --- More Nested Structs & Unions ---
// ============================================================

// Q79. [NESTED] Union inside struct
#if 0
union Uin {
    int   x;
    float y;
};
struct Q79 {
    char      tag;
    union Uin u;
};
int main() {
    printf("%zu", sizeof(struct Q79));
}
// Yes: 0
#endif

// Q80. [NESTED] Struct with two nested structs
#if 0
struct Pt
{
    int x;
    int y;
};
struct Dim
{
    int w;
    int h;
};
struct Q80
{
    struct Pt origin;
    struct Dim size;
};
int main()
{
    printf("%zu", sizeof(struct Q80));
}
// Yes: 0
#endif

// Q81. [NESTED] offsetof nested member — predict offsetof(Q81, b.y)
#if 0
struct Inner81 { char x; int y; };
struct Q81     { char a; struct Inner81 b; };
int main() {
    printf("%zu", offsetof(struct Q81, b.y));
}
// Yes: 0
#endif

// Q82. [NESTED] Array of unions
#if 0
union Elem {
    int   i;
    float f;
    char  c;
};
int main() {
    printf("%zu", sizeof(union Elem[5]));
}
// Yes: 0
#endif

// Q83. [NESTED] Struct with bitfield member nested in union
#if 0
struct BFN {
    unsigned int a : 4;
    unsigned int b : 4;
};
union Q83 {
    struct BFN bf;
    char       raw;
};
int main() {
    printf("%zu", sizeof(union Q83));
}
// Yes: 0
#endif

// Q84. [NESTED] Double-nested struct padding
#if 0
struct L1 { char a; int b; };
struct L2 { char x; struct L1 inner; double d; };
struct L3 { struct L2 mid; char z; };
int main() {
    printf("%zu", sizeof(struct L3));
}
// Yes: 0
#endif

// Q85. [NESTED] Union inside packed struct
#if 0
union SmallU { short a; char b[2]; };
#pragma pack(1)
struct Q85 {
    char         tag;
    union SmallU u;
};
#pragma pack()
int main() {
    printf("%zu", sizeof(struct Q85));
}
// Yes: 0
#endif

// ============================================================
// --- More #pragma pack ---
// ============================================================

// Q86. [PRAGMA] pack(1) union with double
#if 0
#pragma pack(1)
union Q86 {
    char   a;
    double b;
    int    c;
};
#pragma pack()
int main() {
    printf("%zu", sizeof(union Q86));
}
// Yes: 0
#endif

// Q87. [PRAGMA] pack(2) nested struct
#if 0
#pragma pack(2)
struct Inner87 { char a; int b; };
struct Q87     { short x; struct Inner87 y; char z; };
#pragma pack()
int main() {
    printf("%zu", sizeof(struct Q87));
}
// Yes: 0
#endif

// Q88. [PRAGMA] pack(4) pointer alignment capped
#if 0
#pragma pack(4)
struct Q88 {
    char  a;
    void *b;
    char  c;
};
#pragma pack()
int main() {
    printf("%zu", sizeof(struct Q88));
}
// Yes: 0
#endif

// Q89. [PRAGMA] pack(1) bitfield struct
#if 0
#pragma pack(1)
struct Q89 {
    unsigned int a : 4;
    unsigned int b : 4;
    char         c;
};
#pragma pack()
int main() {
    printf("%zu", sizeof(struct Q89));
}
// Yes: 0
#endif

// Q90. [PRAGMA] pack(2) with double array
#if 0
#pragma pack(2)
struct Q90 {
    char   a;
    double b[2];
};
#pragma pack()
int main() {
    printf("%zu", sizeof(struct Q90));
}
// Yes: 0
#endif

// ============================================================
// --- Mixed / Advanced (continued) ---
// ============================================================

// Q91. [MIXED] sizeof pointer to struct vs struct itself — prints two values
#if 0
struct Q91 { int a; double b; char c; };
int main() {
    printf("%zu %zu", sizeof(struct Q91 *), sizeof(struct Q91));
}
// Yes: 0
#endif

// Q92. [MIXED] offsetof in deeply nested struct
#if 0
struct Q92_Inner { char x; double y; };
struct Q92_Mid   { int  a; struct Q92_Inner in; };
struct Q92_Outer { char tag; struct Q92_Mid mid; };
int main() {
    printf("%zu", offsetof(struct Q92_Outer, mid.in.y));
}
// Yes: 0
#endif

// Q93. [MIXED] Tagged union pattern sizeof
#if 0
struct Vec2 { float x; float y; };
struct Vec3 { float x; float y; float z; };
union AnyVec {
    struct Vec2 v2;
    struct Vec3 v3;
};
struct Q93 {
    int          type;
    union AnyVec data;
};
int main() {
    printf("%zu", sizeof(struct Q93));
}
// Yes: 0
#endif

// Q94. [MIXED] Struct with volatile member
#if 0
struct Q94 {
    char         a;
    volatile int b;
    char         c;
};
int main() {
    printf("%zu", sizeof(struct Q94));
}
// Yes: 0
#endif

// Q95. [MIXED] pack(1) union inside default struct
#if 0
#pragma pack(1)
union PackedU {
    int  a;
    char b[3];
};
#pragma pack()
struct Q95 {
    char          x;
    union PackedU u;
    char          y;
};
int main() {
    printf("%zu", sizeof(struct Q95));
}
// Yes: 0
#endif

// Q96. [MIXED] Bitfield zero-width between different types
#if 0
struct Q96 {
    unsigned char a : 4;
    unsigned int    : 0;
    unsigned int  b : 4;
};
int main() {
    printf("%zu", sizeof(struct Q96));
}
// Yes: 0
#endif

// Q97. [MIXED] Union containing a bitfield struct and a double
#if 0
struct BFDouble {
    unsigned int x : 16;
    unsigned int y : 16;
};
union Q97 {
    struct BFDouble bf;
    double          d;
};
int main() {
    printf("%zu", sizeof(union Q97));
}
// Yes: 0
#endif

// Q98. [MIXED] Array of packed structs vs default struct array — two values
#if 0
struct Default98 { char a; int b; };
#pragma pack(1)
struct Packed98  { char a; int b; };
#pragma pack()
int main() {
    printf("%zu %zu", sizeof(struct Default98[3]), sizeof(struct Packed98[3]));
}
// Yes: 0
#endif

// Q99. [MIXED] offsetof union member inside outer struct
#if 0
union Q99_U { int x; char y[8]; };
struct Q99  { char tag; union Q99_U u; };
int main() {
    printf("%zu", offsetof(struct Q99, u));
}
// Yes: 0
#endif

// Q100. [MIXED] Struct with all types — biggest alignment wins tail padding
#if 0
struct Q100 {
    char      a;
    short     b;
    int       c;
    long long d;
    float     e;
    double    f;
    char      g;
};
int main() {
    printf("%zu", sizeof(struct Q100));
}
// Yes: 0
#endif
