#include "sorting.h"

t_sort	sorting[] =
{
	{"bubble", bubble_sort},
	{"selection", selection_sort},
	{"insertion", insertion_sort},
	{NULL, NULL},
};

void	tester(char *method, int *arr, int size)
{
	clock_t	t;
	double	time_taken;
	int		i;

	i = -1;
	t = 0;
	while (sorting[++i].type != NULL)
	{
		if (ft_strcmp(sorting[i].type, method) == 0)
		{
			t = clock();
			sorting[i].function(arr, size);
			t = clock() - t;
			break;
		}
	}
	time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
	arr_print(method, arr, size);
	ft_printf("take %f seconds to excute\n\n", method, time_taken);
}

void	arr_print(char *method, int *arr, int size)
{
	int i;

	i = -1;
	ft_printf("%s sort\n", method);
	while (++i < size)
		ft_printf("%d\t", arr[i]);
	ft_printf("\n");
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
