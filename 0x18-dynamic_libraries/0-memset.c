#include "main.h"

/**
 * _memset - function fill the @n bytes of the memory area pointed to bt @s
 * @n: bytes of the memoy area pointed by @s
 * @s: with the constant byte @b
 * @b: memory area pointer
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
