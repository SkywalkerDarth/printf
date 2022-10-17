#include "main.h"

/**
 * print_c - A function that prints a character
 * @c: character to print
 * Return: 1 on success
 */
int print_c(va_list)
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}
