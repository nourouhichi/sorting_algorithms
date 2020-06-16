#include "sort.h"
/**
 * selection_sort - selction sort algorithm
 * @array: array
 * @size: size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
  int aux;
  unsigned int x, y, min;

	if (!array || size < 2)
		return;
	for (y = 0; y < size; y++)
	{
		min = y;
		for (x = y + 1; x < size; x++)
		{
			if (array[x] < array[min])
				min = x;
		}
		if (y != min)
		  {
                    aux = array[x];
                    array[x] = array[y];
                    array[y] = aux;
		    print_array(array, size);
		}
	}

}
