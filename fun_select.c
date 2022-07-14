#include "main.h"

/**
 * choice - selects functions for conversion specifier
 * @s: conversion specifier
 * Return: 0 (Success)
 */
int (*choice(char s))(va_list)
{
	if (s == 'c')
	{
		return (print_c);
	}
	else if (s == 's')
	{
		return (print_s);
	}
	else if (s == 'i' || s == 'd')
	{
		return (print_int);
	}
	else if (s == 'b')
	{
		return (print_b);
	}
	return (NULL);
}
