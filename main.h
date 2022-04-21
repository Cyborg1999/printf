<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H
=======
#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
>>>>>>> f50fbc6ba535eebdfc56a18e2ccd72d7da26d98e

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
<<<<<<< HEAD
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
=======
>>>>>>> f50fbc6ba535eebdfc56a18e2ccd72d7da26d98e
int _printf(const char *format, ...);

#endif
