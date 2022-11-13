#include <stdio.h>

/**
 * main - prints the of arguments passed into it.
 * @argc: arguement count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;


	printf("%s\n", argv[0]);
	return (0);
}
