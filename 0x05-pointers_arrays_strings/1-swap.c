#include "main.h"

/**
 * swap_int -  the value of int
 * @a: first int
 * @b: second int
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
