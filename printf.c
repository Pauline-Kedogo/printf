#include <stdio.h>
#include "main.h"
/**
 * _printf - function that produces output according to format
 * @format: contains conversion specifiers like "c","s","%"
 * Return: Numbers of characters printed
 */
int _printf(const char *format, ...)
{
	int counter;
	va_list aps;

	spec_t specs[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_i},
		{"i", print_i},
		{"b", print_b},
		{"u", print_ui},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_Hex},
		{"S", print_cs},
		{"p", print_ptr},
		{"R", conv_rot13},
		{"r", _rev},
		{NULL, NULL}
	};
	va_start(aps, format);

	if (!format)
		counter = -1;
	else
		counter = _vprintf(specs, format, aps);
	va_end(aps);
	return (counter);
}
