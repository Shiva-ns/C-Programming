#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// Share the stack variables across all .c files
extern int top;
extern int stack_arr[MAX];

void push(int v);
void pop();
void print();
void top_element();

#endif