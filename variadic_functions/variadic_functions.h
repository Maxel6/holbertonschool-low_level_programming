#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_all(const char * const format, ...);
void charf(va_list);
void intf(va_list);
void floatf(va_list);
void stringf(va_list);

typedef struct type
{
        char form;
        void (*f)(va_list);
}type_t;

#endif
