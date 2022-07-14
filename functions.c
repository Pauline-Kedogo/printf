#include "main.h"
/**
 * _putchar - prints characters
 * @c: Character to be printed
 * Return: Always 0 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_c - prints number of characters
 * @args: arguments
 * Return: character count
 */
int print_c(va_list args)
{
	char c = va_arg(args, int);
	int count_c = 0;

	count_c += _putchar(c);
	return (count_c);
}

/**
 * print_s - prints a string
 * @args: string arguments
 * Return: string count
 */
int print_s(va_list args)
{
	int j = 0, count_s = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[j] != '\0')
	{
		count_s += _putchar(s[j]);
		j++;
	}
	return (count_s);
}
/**
 * print_int - prints an integer
 * @args: arguments
 * Return: integer count
 */
int print_int(va_list args)
{
	unsigned int num, my_num, counter, count;
	int n;

	count = 0;
	n = va_arg(args, int);
	if (n < 0)
	{
		num = (n * -1);
		count += _putchar('-');
	}
	else
		num = n;
	my_num = num;
	counter = 1;
	while (my_num > 9)
	{
		my_num /= 10;
		counter *= 10;
	}
	while (counter >= 1)
	{
		count += _putchar(((num / counter) % 10) + '0');
		counter /= 10;
	}
	return (count);
}
/**
 * print_b - Convert of decimals in binary
 * @args: Store the argumen values
 * Return: The count
 */
int print_b(va_list args)
{
	unsigned int i, count, n, bin, arr[32];

	i = 0, count = 0;

	n = va_arg(args, int);

	if (n < 1)
	{
		count += _putchar(48);
		return (count);
	}
	else
	{
		while (n > 0)
		{
			bin = n % 2;
			n /= 2;
			arr[count] = bin;
			count++;
		}
		i = count - 1;
		while (i > 0)
		{
			_putchar('0' + arr[i]);
			i--;
		}
		_putchar('0' + arr[i]);
	}
	return (count);
}
