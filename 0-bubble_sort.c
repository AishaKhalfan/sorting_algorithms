#include "sort.h"

/**
 *
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				for (k = 0; k < size; k++)
				{
					printf("%d ", array[k]);
				}
                                printf("\n");
			}
		}
	}
}
