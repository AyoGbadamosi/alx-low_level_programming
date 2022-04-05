#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars, and initializes it 
 * with a specific char
 * @size: size of array
 * @c: char to initialize array with
 * Return: NULL if size = 0, pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int j;
	j = 0;

	if (size == 0)
		return (NULL);

	else if (size != 0)
	{
		n = (char *) malloc(sizeof(char) * size);
		while (j < size)	
		{
			n[j] = c;
			j++;
		}
		return (n);
		free (n);
	}
	else
		return (NULL);
	
}
