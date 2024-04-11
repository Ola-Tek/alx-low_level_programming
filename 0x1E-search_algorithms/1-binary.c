#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the firat element
 * @size: the number of elements in the array
 * @value: the valye search function
 * Return: -1, if the value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/* calculate d middle */
		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}