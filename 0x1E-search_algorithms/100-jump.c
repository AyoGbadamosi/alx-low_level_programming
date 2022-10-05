#include "search_algos.h"

/**
 * jump_search - searches for a valuue in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	start = 0;
	end = sqrt(size);
	if (!array)
		return (-1);
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[end] < value && start < size)
	{
		start = end;
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		end += sqrt(size);
		if (end > size)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
