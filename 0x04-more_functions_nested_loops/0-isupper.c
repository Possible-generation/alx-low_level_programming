#include "main.h"


/**
 * _isupper - check if character is lowercase
 * @c: character to check if it is lowercase
 * Return: 0-if lowecase,1-if not
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
