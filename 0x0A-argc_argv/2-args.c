#include <stdio.h>

/**
 * main - prints all arguments all receives.
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;


	for (i = 0; i < argc; i++)
		printf("%s\n", argv[1]);
	return (0);
}
