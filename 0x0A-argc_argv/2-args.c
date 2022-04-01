#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 * @i: counter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
