#include "main.h"

/**
 * _isdigit - check if a character is digit
 * @c: number to be checked
 * Return: if c is digit, or 0
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
