#include "sort.h"
/**
 * selection_sort - sorts an array
 * @size: the size of the array
 * @array: the array to sort
 */
void selection_sort(int *array, size_t size)
{
	int aux;
	unsigned int j, i, index;

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[index] > array[j])
			{
				index = j;
			}
		}
		if (index != i)
		{
			aux = array[i];
			array[i] = array[index];
			array[index] = aux;
			print_array(array, size);
		}
	}
}
