#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry piont
 * Description: print three number combination
 * REturn: always 0 (Success)
 */
int main(void)
{
	int c, i, k;



	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (c < i && i < k)
				{
					putchar(c);
					putchar(i);
					putchar(k);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}