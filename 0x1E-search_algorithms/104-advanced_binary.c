#include "search_algos.h"

/**
 * advanced_binary - returns the index of the first value if the value
 * appears more than once
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, l, r, m, count;

	l = 0;
	r = size;
	if (!array)
		return (-1);
	count = 0;
	 while (l < r)
	 {
		m = (l + r) / 2;
		printf("Searching in array:");
		if (l > 0)
			count = l - 1;
		for (i = count; i < r; i++)
		{
			if (i != r - 1)
				printf(" %d,", array[i]);
			else
				printf(" %d\n", array[i]);
		}
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m;
		else
			return (m);
	}
	return (-1);
}
