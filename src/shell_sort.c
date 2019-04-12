#include "sorting.h"

int		*shell_sort(int *arr, int size)
{
	int k;
	int i;
	int	j;

	k = size;
	while ((k /= 2)  > 0)
	{
		k += k % 2 == 0 ? 1 : 0;
		i = size;
		while (k <= --i)
		{
			j = 0;
			while (i - k * ++j >= 0)
			{
				// printf("arr[%d] : %d\tarr[%d] : %d\n",i, arr[i], i - k * j, arr[i - k * j]);
				if (arr[i] < arr[i - k * j])
				{
					// printf("-------------swaped---------------!\n");
					ft_swap(&arr[i], &arr[i - k * j]);
					// arr_print("sorted happend shell sorting..ing", arr, size, i, i - k * j);
				}
			}
		}
	}
	return (arr);
}
