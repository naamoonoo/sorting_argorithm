#include "sorting.h"

void	ft_push(int *arr, int from, int to)
{
	while (to < from)
	{
		ft_swap(&arr[from], &arr[from - 1]);
		from--;
	}
}

int		*insertion_sort(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (++i < size)
	{
		j = -1;
		while (++j < i)
		{
			if (arr[j] > arr[i])
			{
				ft_push(arr, i, j);
			}
		}
	}
	return (arr);
}
