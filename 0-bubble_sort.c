#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using the bubble sort algorithm
 *
 * @array: is an array of unordered numbers
 * @size: is the size of the array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t j;
	size_t i;
	int tmp;

	if (!array || size < 2)
		return;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
