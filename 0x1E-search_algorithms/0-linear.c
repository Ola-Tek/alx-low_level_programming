#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array
 * @array: a pinter to the first element
 * @size: is the number of elements in the array
 * @value: the value to search for
 * Return: if the value is not present on the array is NULL, -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* check if the array is Null */
	if (array == NULL)
		return (-1);

	/* iterate over the array */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
