#include "main.h"

/**
 * _strpbrk - function that searches string for any of a set of bytes
 * @s: first string
 * @accept: matches one of the bytes, or @NULL if no such byte
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;


	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;

	}
	return (NULL);
}
