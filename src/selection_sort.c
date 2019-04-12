#include "sorting.h"

int	*selection_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	min_i;

	i = -1;
	while (++i < size)
	{
		min_i = i;
		j = i;
		while (++j < size)
		{
			if (arr[min_i] > arr[j])
				min_i = j;
		}
		if (min_i != i)
			ft_swap(&arr[i], &arr[min_i]);
	}
	return (arr);
}
