#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_string - function to get a character
 * @strlist: strings to be printed
 * Return: A string
 *
 */
int print_string(va_list strlist)
{
	int i;
	char *s = va_arg(strlist, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
