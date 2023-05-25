#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size:  Number of elements in array
 * @value: Value to search for
 *
 * Return: Value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = (left + right) / 2;
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		i = left;
		printf("Searching in array: ");
		while (i <= right)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
			else
				printf("\n");
			i++;
		}
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
