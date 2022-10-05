#include "search_algos.h"

int binarySearch(int *, size_t, size_t, int);
/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, low;
	int index;

	if (array == NULL)
		return (-1);
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i *= 2;
	}
	low = i / 2;
	if (i > size - 1)
		i = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, i);
	index = binarySearch(array, low, i, value);
	return (index);
}

/**
 * binarySearch - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: leftmost element in the subarray
 * @high: rightmost element in the subarray
 * @value: value to search for
 * Return: first index where value is located or -1
 */
int binarySearch(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			if (i != high)
				printf(" %d,", array[i]);
			else
				printf(" %d\n", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
