#include "search_algos.h"

/**
 * linear_search - linearly search for a number in an array
 * @array: point to the first element
 * @size: number of element
 * @value: the value to search for
 *
 *Return: return the index the value is located else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
