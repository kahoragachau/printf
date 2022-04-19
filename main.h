#ifndef MAIN_H
#define MAIN_H

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
			}	

int _putchar(char c);
int _print(char c);
int _strlen(char *s);
int intlen(int n);
int uintlen(unsigned int n);
void _strrev(char *s);

int _printf(const char * const format, ...);
int (*fmt(char c))(va_list); 

#endif
