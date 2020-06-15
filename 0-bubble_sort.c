#include "sort.h"
/**
 * bubble_sort - sorts a list
 * @array: the array to be sorted
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	if (size < 2 && !array)
		return;
	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1 - j; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_int(array, i);
				print_array(array, size);
			}
		}
	}
}
/**
 * swap_int - swaps the elements
 * @array: the array to work on
 * @i: the index
 */
void swap_int(int *array, int i)
{
	int aux = 0;

	aux = array[i];
	array[i] = array[i + 1];
	array[i + 1] = aux;
}
