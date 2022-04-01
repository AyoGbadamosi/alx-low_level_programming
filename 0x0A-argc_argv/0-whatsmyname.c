#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point, prints program name
 * @argc; Argument count
 * @argv: Argument vector
 * @i: counter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
