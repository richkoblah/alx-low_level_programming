#include "main.h"
/**
  * _isdigit - function that checcks for digit 0-9
  * @c: input
  * Return: 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
