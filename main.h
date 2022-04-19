#ifndef PRINTF
#define PRINTF

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define SIZE 1024

#define _FUNCTION_LIST { \
			 	{"c", fmt_char},\
			 	{"s", fmt_string},\
			 	{"d", fmt_int},\
			 	{"i", fmt_int},\
			 	{"u", fmt_unsigned_int},\
			 	{"%", fmt_percentage},\
			 	{"b", fmt_bin},\
			 	{"o", fmt_octal},\
			 	{"x", fmt_hexa},\
			 	{"X", fmt_HEXA},\
			 	{"r", fmt_rev},\
			 	{"p", fmt_pointer},\
			 	{"S", fmt_string_S},\
			 	{"R", fmt_rot13},\
			 	{NULL, unknown}\
			}	

int _putchar(char c);
int _print(char c);
int _strlen(char *s);
int intlen(int n);
int uintlen(unsigned int n);
void _strrev(char *s);

int _printf(const char * const format, ...);
int (*fmt(char c))(va_list); 

int fmt_char(va_list value);
int fmt_string(va_list value);
int fmt_int(va_list value);
int fmt_unsigned_int(va_list value);
int fmt_percentage(va_list value);
int fmt_bin(va_list value);
int fmt_octal(va_list value);
int fmt_hexa(va_list value);
int fmt_HEXA(va_list value);
int fmt_pointer(va_list value);
int fmt_string_S(va_list value);
int fmt_S_HEXA(unsigned int data);
int fmt_rot13(va_list value);
int fmt_rev(va_list value);

int power(int base, unsigned int exponent);
int _abs(int n);

int unknown(void);
int output_error(void);

/**
 * struct pointer_s - holds the pointer to a function required by _printf
 * @specifier: format specifier
 * @func: pointer to the function
 */
typedef struct pointer_s
{
	char *specifier;
	int (*func)();
} pointer_t;

#endif
