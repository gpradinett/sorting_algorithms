#include "sort.h"

/**
 * selection_sort - sort an array of integers in ascending order
 *
 * @array: is an array of unordered numbers
 * @size: is the size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp, flag;

	for (i = 0; i < size; i++)
	{
		flag = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[flag] > array[j])
				flag = j;
		}

		if (flag != i)
		{
			tmp = array[flag];
			array[flag] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
