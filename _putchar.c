#include "main.h"

/**
 * _putchar - writes the character to the stdout
 * @c: The character to be printed
 * Return: 1 on success and -1 on error
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
