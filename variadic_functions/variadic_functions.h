#include <stdarg.h>
#ifndef DOG_H
#define DOG_H

typedef struct print_struct
{
    char format;
    void (*f)(va_list);
} pr_ty;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char (va_list a);
void print_int (va_list a);
void print_float (va_list a);
void print_str (va_list a);

#endif
