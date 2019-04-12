#include "sorting.h"

int	main()
{
	int arr_b[] = {1,4,5,1,83, 16, -2, 0 -162, 24, 6,3,7,3,2,11, 90, 0, -12535};
	tester("bubble", arr_b, sizeof(arr_b)/sizeof(int));

	// bubble_sort(arr_b, 10);
	// arr_print("bubble", arr_b, 10);

	int arr_s[] = {1,4,5,1,83, 16, -2, 0 -162, 24, 6,3,7,3,2,11, 90, 0, -12535};
	tester("selection", arr_s, sizeof(arr_b)/sizeof(int));


	int arr_i[] = {1,4,5,1,83, 16, -2, 0 -162, 24, 6,3,7,3,2,11, 90, 0, -12535};
	tester("insertion", arr_i, sizeof(arr_i)/sizeof(int));
	return (0);
}
