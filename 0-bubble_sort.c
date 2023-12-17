#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * @array: an array of integers.
 * @size: number of array's elements.
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	int i, x;

	if (!array || !size)
		return;

	i = 0;
	while (i < size)
	{
		for (x = 0; x < size - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				temp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
