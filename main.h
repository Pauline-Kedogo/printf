#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct spec - A new struct type holding specifier and its conversion printer
 * @sp: conversion specifier
 * @f: function pointer to function that prints the relevant data type
 */
typedef struct spec
{
	char *sp;
	int (*f)(va_list);
} spec_t;

/* function prototypes */

int _putchar(char c);
int _printf(const char *format, ...);
int _vprintf(spec_t op[], const char *format, va_list aps);
spec_t selfunc(spec_t op[], char sp);
int flags(char c, spec_t func[]);
int print_c(va_list ap);
int print_s(va_list ap);
int print_i(va_list ap);
int p_conv(unsigned int i, unsigned int base, int l);
int print_b(va_list ap);
int print_ui(va_list ap);
int print_oct(va_list ap);
int p_hex(unsigned int i, unsigned int base, int c, int l);
int print_hex(va_list ap);
int print_Hex(va_list ap);
int print_cs(va_list ap);
int print_ptr(va_list ap);
int p_addr(unsigned long i, unsigned int base, int c, int l);
int conv_rot13(va_list ap);
int _rev(va_list ap);

#endif
