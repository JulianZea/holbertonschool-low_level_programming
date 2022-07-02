#ifndef C_FUNCTION_POINTERS
#define C_FUNCTION_POINTERS

#include <stdio.h>
#include <string.h>
typedef unsigned long size_t;

void print_name(char *name, void (*f)(char *));

#endif /*C_FUNCTION_POINTERS*/
