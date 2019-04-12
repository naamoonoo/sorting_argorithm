#include "sorting.h"

int	main(int ac, char *av[])
{
	int test_n;
	int show;

	if (ac != 3)
		return (0);
	test_n = ft_atoi(av[1]);
	show = ft_atoi(av[2]);
	printf("%d set test!\n",test_n);
	// int arr_b[] = {1,4,5,1,83, 16, -2, 0 -162, 24, 6,3,7,3,2,11, 90, 0, -12535};
	tester("bubble", create_random_arr(test_n), test_n, show);

	// bubble_sort(arr_b, 10);
	// arr_print("bubble", arr_b, 10);

	// int arr_s[] = {1,4,5,1,83, 16, -2, 0 -162, 24, 6,3,7,3,2,11, 90, 0, -12535};
	tester("selection", create_random_arr(test_n), test_n, show);


	// int arr_i[] = {1,4,5,1,83, 16, -2, 0 -162, 24, 6,3,7,3,2,11, 90, 0, -12535};
	tester("insertion", create_random_arr(test_n), test_n, show);

	// int arr_sh[] = {1,4,5,1,83, 16, -2, 0 -162, 24, 6,3,7,3,2,11, 90, 0, -12535};
	// int arr_sh[] = {10,8,3,6,20,4,22,3,22,1,0,15,16};
	tester("shell", create_random_arr(test_n), test_n, show);
	return (0);
}
