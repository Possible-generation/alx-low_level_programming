#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: char to check
 * Description: this will return the length
 * Return: Always 0
 */

int _strlen(char *s)
{
	int a = 0;


	for (; *s++;)
		a++;
	return (a);
}
