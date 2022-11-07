#include "main.h"

/**
 * File: 0-puts_recursion.c
 * _puts_recursion - prints a string, followed by a new line.
 * @s: The string to be printed.
 * Return: no return
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
