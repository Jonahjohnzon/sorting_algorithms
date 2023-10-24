#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @n1: first integer.
 * @n2: second integer.
 */
void swap_ints(int *n1, int *n2)
{
	int tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: array of integers.
 * @size: size of the array.
 *
 * Desc: Prints the array.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t a, b;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		min = array + a;
		for (b = a + 1; b < size; b++)
			min = (array[b] < *min) ? (array + b) : min;

		if ((array + a) != min)
		{
			swap_ints(array + a, min);
			print_array(array, size);
		}
	}
}
