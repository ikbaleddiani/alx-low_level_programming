#include "search_algos.h"

/**
 * mini_array - prints an array.
 *
 * @array: is a pointer to the first element of the array to print.
 * @min: is the first element in the array.
 * @max: is the last element in the array.
 */
void mini_array(int *array, size_t min, size_t max)
{
	printf("Searching in array: ");
	while (min <= max)
	{
		if (min == max)
			printf("%d\n", array[min]);
		else
			printf("%d, ", array[min]);
		min++;
	}
}

/**
 * binary_serach_algo - Function that search for an element in the array
 * to search in.
 *
 * @array: is a pointer to the first element of the array to print.
 * @min: is the first element in the array
 * @max: is the last element in the array.
 * @value: value is the value to search for.
 *
 * Return: return the first index where value is located; otherwise return -1.
 */
int binary_serach_algo(int *array, size_t min, size_t max, int value)
{
	if (min <= max)
	{
		int mid;

		mini_array(array, min, max);
		mid = (min + max) / 2;
		if (array[mid] > value)
			return (binary_serach_algo(array, min, mid - 1, value));
		else if (array[mid] < value)
			return (binary_serach_algo(array, mid + 1, max, value));
		return (mid);
	}
	return (-1);
}

/**
 * binary_search - Function that searches for a value in an array of integers.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: value is the value to search for.
 *
 * Return: return the first index where value is located; otherwise return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array)
		return (binary_serach_algo(array, 0, size - 1, value));
	return (-1);
}
