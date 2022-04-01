#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point, prints the number of arguments passed to it
 * @argc: Argument count
 * @argc: Argument vector
 * @i: integer
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;
	i = argc - 1;

	printf("%d\n", i);
	return (0);
}
