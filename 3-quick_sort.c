#include "sort.h"

/**
 * swpitems - Swaps two
 * @array: The array
 * @l: input
 * @r: input
 */
void swpitems(int *array, size_t l, size_t r)
{
	int t;

	if (array != NULL)
	{
		t = array[l];
		array[l] = array[r];
		array[r] = t;
	}
}

/**
 * quick_ - Sorts a sub array
 * @array: sub-array.
 * @low: input
 * @high: input
 * @size: length
 */
void quick_(int *array, size_t low, size_t high, size_t size)
{
	size_t ky, i;
	int p;

	if ((low >= high) || (array == NULL))
	{
		return;
	}
	p = array[high];
	ky = low;
	for (i = low; i < high; i++)
	{
		if (array[i] <= p)
		{
			if (ky != i)
			{
				swpitems(array, ky, i);
				print_array(array, size);
			}
			ky++;
		}
	}
	if (ky != high)
	{
		swpitems(array, ky, high);
		print_array(array, size);
	}
	if (ky - low > 1)
	{
		quick_(array, low, ky - 1, size);
	}
	if (high - ky > 1)
	{
		quick_(array, ky + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array
 * @array: input
 * @size: input
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL)
	{
		quick_(array, 0, size - 1, size);
	}
}
