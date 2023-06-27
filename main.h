#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct my_struct - Struct to hold special chars and function pointers
 * @c: hold special characters
 * @f: function pointers
 *
 * Description: My struct to help me
 */
typedef struct my_struct
{
	char *c;
	int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int _print_char(va_list ap);
int _print_string(va_list ap);
int _strlen(char *str);
int _print_int(va_list ap);
int _putchar(char c);
int printBin(va_list ap);
int printUnsigned(va_list ap);
int printOctal(va_list ap);
#endif
