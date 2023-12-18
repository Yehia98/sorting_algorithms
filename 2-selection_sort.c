#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using.
 * the Selection sort algorithm.
 *
 * @array: a pointer to an array of integers.
 * @size: size of the array.
 * Return: void.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, x, z;
	int temp;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (x = size - 1; z = i + 1; x > i; x--)
		{
			if (array[z] > array[x])
				z = x;
		}
		if (array[i] > array[z])
		{
			temp = array[i];
			array[i] = array[z];
			array[z] = temp;
			print_array(array, size);
		}
	}
}
