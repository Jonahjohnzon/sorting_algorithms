#include "sort.h"

/**
 * swpints - Swap integers
 * @a: input
 * @b: input
 */
void swpints(int *a, int *b)
{
	int tmps;

	tmps= *a;
	*a = *b;
	*b = tmps;
}

/**
 * bubble_sort - Sort array of integers
 * @array: array to be sorted
 * @size: The size.
 * Description: Prints the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, length = size;
	bool bubbl = false;

	if (array == NULL || size < 2)
	{
		return;
	}

	while (bubbl == false)
	{
		bubbl = true;
		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swpints(array + i, array + i + 1);
				print_array(array, size);
				bubbl = false;
			}
		}
		length--;
	}
}
