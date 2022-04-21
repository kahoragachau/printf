#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - function to get character variable
 * @charList: characters to be printed
 * Return: the list of character
 */
int print_char(va_list charList)
{
	char c = va_arg(charList, int);

	return (_putchar(c));
}
