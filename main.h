#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int (*choice(char s))(va_list);
int print_int(va_list args);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);

#endif
