/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:31:49 by hnam              #+#    #+#             */
/*   Updated: 2019/04/12 10:55:29 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

//
# include <stdio.h>
# include <time.h>
//

# include "../lib/libftprintf/includes/ft_printf.h"
# include "../lib/libftprintf/includes/libft.h"

typedef struct	s_sorting
{
	char		*type;
	int			*(*function)();
}				t_sort;

void	arr_print(char *method, int *arr, int size, int a, int b);
void	tester(char *method, int *arr, int size, int res_show);
void	ft_swap(int *a, int *b);
void	ft_push(int *arr, int from, int to);
int		*create_random_arr(int size);

int		*bubble_sort(int *arr, int size);
int		*selection_sort(int *arr, int size);
int		*insertion_sort(int *arr, int size);
int		*shell_sort(int *arr, int size);



#endif
