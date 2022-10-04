#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r, m;

	l = 0;
	r = size - 1;
	if (!array)
		return (-1);
	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array:");
		for (i = l; i <= r; i++)
		{
			if (i != r)
				printf(" %d,", array[i]);
			else
				printf(" %d\n", array[i]);
		}
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
