#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print the alphabet in lowercase
 * Return: Alwat 0 (Success)
 */
int main(void)
{
	int ch;


	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
