#include "sorting.h"

t_sort	sorting[] =
{
	{"bubble", bubble_sort},
	{"selection", selection_sort},
	{"insertion", insertion_sort},
	{"shell", shell_sort},
	{NULL, NULL},
};

int		*create_random_arr(int size)
{
	int	i;
	int	*res;

	i = -1;
	res = malloc(sizeof(int) * size);
	while (++i < size)
		res[i] = rand() % 10000 - 5000;
		// printf("%d\n", rand() % 100 - 50);
	return (res);
}

void	tester(char *method, int *arr, int size, int res_show)
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
	res_show ? arr_print(method, arr, size, -1, -1) : 0;
	ft_printf("take %f seconds to excute\n\n", method, time_taken);
}

void	arr_print(char *method, int *arr, int size, int a, int b)
{
	int i;

	i = -1;
	ft_printf("%s sort\n", method);
	while (++i < size)
		(i == a || i == b) ? ft_printf("{red}%d{eoc}   ", arr[i]) : ft_printf("%d   ", arr[i]);
	ft_printf("\n");
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
