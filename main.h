#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct_print - Structure for printing various types of functions
 * @t: type to print
 * @f: function to print
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list);
int print_s(va_list);
int print_d(va_list);
int print_i(va_list);
int print_b(va_list);
int print_u(va_list);
int print_o(va_list);
int print_X(va_list);
int print_x(va_list);
int print_S(va_list);
int print_p(va_list);
int print_add(va_list);
int print_space(va_list);
int print_sharp(va_list);
int print_l(va_list);
int print_h(va_list);
int print_0(va_list);
int print_f(va_list);
int print_e(va_list);
int print_g(va_list);
int print_r(va_list);
int print_R(va_list);

#endif /* MAIN.H */
