#include "main.h"

/**
 * more_numbers - print more number
 * put _putchar just three times
 * Return: 10 times of the number
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
