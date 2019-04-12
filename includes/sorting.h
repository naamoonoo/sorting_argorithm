/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:31:49 by hnam              #+#    #+#             */
/*   Updated: 2019/04/11 21:42:05 by hnam             ###   ########.fr       */
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

void	arr_print(char *method, int *arr, int size);
void	tester(char *method, int *arr, int size);
void	ft_swap(int *a, int *b);
void	ft_push(int *arr, int from, int to);

int		*bubble_sort(int *arr, int size);
int		*selection_sort(int *arr, int size);
int		*insertion_sort(int *arr, int size);



#endif
