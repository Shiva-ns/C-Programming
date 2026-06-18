/*
//Problem 3 — NULL Check
Fill in the blanks:
#include <stdio.h>

void *buffer = malloc(128);
if (buffer == NULL)
{
    return;
}
memcpy(buffer, source, 128);

free(buffer);
buffer  = NULL;
*/

#if 0
/*
Problem 4 — IN/OUT
Write a function signature called get_device_info that:

Takes a unsigned int device_id as input
Fills unsigned short *vendor_id as output
Fills unsigned short *device_rev as output
Returns int as status (0 = success, -1 = fail)

*/

#include <stdio.h>
#include <stdint.h>

#define success 0
#define fail -1

int get_device_info(uint16_t device_id, uint16_t *vendor_id, uint16_t *device_rev)
{
    if (vendor_id == NULL || device_rev == NULL)
    {
        return -1;
    }
    switch (device_id)
    {
    case 100:
        *vendor_id = 0x1022;
        *device_rev = 0x01;
    case 200:
        *vendor_id = 0x8086;
        *device_rev = 0x02;
        return success;
    default:
        return fail;
    }
}

int main()
{
    uint16_t vendor;
    uint16_t rev;
    int status;
    status = get_device_info(100, &vendor, &rev);

    if (status == 0)
    {
        printf("Vendor ID : 0x%X\n", vendor);
        printf("Device Rev: 0x%X\n", rev);
    }
    else
    {
        printf("Device not found!\n");
    }
    return 0;
}

#endif

#if 0
/*
Problem 5 — Error Chain
Write 2 functions:

init_hardware() — calls malloc, returns -1 if failed
start_device() — calls init_hardware(), if it fails print error and return -1
*/
#include <stdlib.h>
#include <stdio.h>
#define success 0
#define fail -1

int init_hardware()
{
    void *mem = malloc(sizeof(100));
    if (mem == NULL)
    {
        return fail;
    }

    free(mem);
    return success;
}
int start_device()
{
    if (init_hardware() != success)
    {
        printf("Error: Hardware initialization failed!\n");
        return fail;
    }
    printf("Device started successfully.\n");
    return success;
}

int main()
{
    int status = start_device();
    if (status != success)
    {
        printf("Mem device startup failed\n");
    }
    else
    {
        printf("Start to initializa next PCIe H/W\n");
    }
    return 0;
}
#endif

#if 0
/*
Problem 6 — Struct with Function Pointer
Write a struct called uart_protocol with:

send — takes unsigned char data, returns int
receive — takes unsigned char *data, returns int
reset — takes void, returns int

Then write one real function for send that just prints the data.
Then create an instance of the struct.
*/

#include <stdio.h>

/* Real send function */
int uart_send(unsigned char data)
{
    printf("Sending: 0x%X\n", data);
    return 0;
}

/* Dummy receive function */
int uart_receive(unsigned char *data)
{
    *data = 0xAA;
    return 0;
}

/* Dummy reset function */
int uart_reset(void)
{
    printf("UART Reset\n");
    return 0;
}

/* Protocol structure */
struct uart_protocol
{
    int (*send)(unsigned char data);
    int (*receive)(unsigned char *data);
    int (*reset)(void);
};

int main()
{
    unsigned char data;

    /* Create an instance and initialize function pointers */
    struct uart_protocol uart =
        {
            uart_send,
            uart_receive,
            uart_reset};

    /* Call through function pointers */
    uart.send(0x55);

    uart.receive(&data);
    printf("Received: 0x%X\n", data);

    uart.reset();

    return 0;
}

#endif

#if 0

/*
#include <stdio.h>

#define BIT_SET(reg, bit)   // you fill
#define BIT_CLR(reg, bit)   // you fill
#define BIT_TST(reg, bit)   // you fill

int main() {
    unsigned int reg = 0x00000000;

    // Q1. SET bit 0  — what is reg?
    // Q2. SET bit 4  — what is reg?
    // Q3. SET bit 7  — what is reg?
    // Q4. CLEAR bit 4 — what is reg?
    // Q5. TEST bit 7  — 1 or 0?
    // Q6. Final reg value in hex?

    return 0;
}
*/

#include <stdio.h>

#define BIT_SET(reg, bit) (reg | (1 << bit))
#define BIT_CLR(reg, bit) (reg & (~(1 << bit)))
#define BIT_TST(reg, bit) (reg & (1 << bit))

int main()
{
    unsigned int reg = 0x00000000;

    // Q1. SET bit 0  — what is reg?
    reg = reg | BIT_SET(reg, 0);
    printf("SET bit 0 : 0x%x\n", reg);
    // Q2. SET bit 4  — what is reg?
    reg = reg | BIT_SET(reg, 4);
    printf("SET bit 4 : 0x%x\n", reg);
    // Q3. SET bit 7  — what is reg?
    reg = reg | BIT_SET(reg, 7);
    printf("SET bit 7 : 0x%x\n", reg);
    // Q4. CLEAR bit 4 — what is reg?
    reg = BIT_CLR(reg, 4);
    printf("CLEAR bit 4 : 0x%x\n", reg);
    // Q5. TEST bit 7  — 1 or 0?
    if (BIT_TST(reg, 7))
    {
        printf("TEST bit 7 1 or 0 : %d\n", 1);
    }
    else
    {
        printf("TEST bit 7 1 or 0 : %d\n", 0);
    }

    // Q6. Final reg value in hex?
    printf("Final Reg val : 0x%x\n", reg);

    return 0;
}

#endif

#if 0
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divi(int a, int b)
{
    if (b == 0)
    {
        printf("Division by zero is not allowed\n");
        return 0;
    }
    return a / b;
}

struct calculator
{
    int a;
    int b;
    char op;
    int (*fptr)(int, int);
};

int main()
{
    struct calculator c;

    printf("Enter first number: ");
    scanf("%d", &c.a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &c.op);

    printf("Enter second number: ");
    scanf("%d", &c.b);

    switch (c.op)
    {
    case '+':
        c.fptr = add;
        break;
    case '-':
        c.fptr = sub;
        break;
    case '*':
        c.fptr = mul;
        break;
    case '/':
        c.fptr = divi;
        break;
    default:
        printf("Invalid operator\n");
        return 1;
    }

    printf("Result = %d\n", c.fptr(c.a, c.b));

    return 0;
}

#endif

#if 1
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divi(int a, int b)
{
    if (b == 0)
    {
        printf("Division by zero is not allowed\n");
        return 0;
    }
    return a / b;
}

struct calculator
{
    int a;
    int b;
    char op;
};

int main()
{
    int (*fptr)(int, int);
    struct calculator c;

    printf("Enter first number: ");
    scanf("%d", &c.a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &c.op);

    printf("Enter second number: ");
    scanf("%d", &c.b);

    switch (c.op)
    {
    case '+':
        fptr = add;
        break;
    case '-':
        fptr = sub;
        break;
    case '*':
        fptr = mul;
        break;
    case '/':
        fptr = divi;
        break;
    default:
        printf("Invalid operator\n");
        return 1;
    }

    printf("Result = %d\n", fptr(c.a, c.b));

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
