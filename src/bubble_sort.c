#include "sorting.h"

int	*bubble_sort(int *arr, int size)
{
	int	i;

	while (size--)
	{
		i = -1;
		while (++i < size)
		{
			if (arr[i] > arr[i + 1])
				ft_swap(&arr[i], &arr[i + 1]);
		}
	}
	return (arr);
}
