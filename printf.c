#include "main.h"
/**
 * _printf - function that prints to std
 * @format: character string
 * Return: the number of characters printed
 * excluding the null byte used to end output to strings
 */
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		va_list args;
		int i = 0, (*fs)(va_list);

		va_start(args, format);
		if (format[0] == '%' && format[1] == '\0')
			return (count);
		count = 0;
		while (format[i] != '\0')
		{
			if (format[i] != '%')
			{
				count += _putchar(format[i]);
			}
			else
			{
				if (format[i + 1] == '%')
				{
					count += _putchar('%');
					i++;
				}
				else
				{
					fs = choice(format[i + 1]);
					count += (fs ? fs(args) : _putchar(format[i]) + _putchar(format[i + 1]));
					i++;
				}
			}
			i++;
		}
		va_end(args);
	}
	return (count);
}
