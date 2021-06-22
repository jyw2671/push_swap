/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pivot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 21:38:30 by yjung             #+#    #+#             */
/*   Updated: 2021/06/22 22:53:15 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_array(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static void	*make_array(t_stack *stack, int cnt)
{
	int	*result;
	int	i;

	ft_malloc((void **)&result, (sizeof(int) * (cnt + 1)));
	i = -1;
	while (++i < cnt)
	{
		result[i] = stack->value;
		stack = stack->bottom;
	}
	return (result);
}

void	set_pivot(int pivot[], t_stack *stack, int cnt)
{
	int	*array;
	int	a;
	int	b;

	array = make_array(stack, cnt);
	a = -1;
	a = -1;
	while (++a < cnt - 1)
	{
		b = a;
		while (++b < cnt)
		{
			if (array[a] > array[b])
				swap_array(&array[a], &array[b]);
		}
	}
	pivot[0] = array[(cnt * 2) / 3];
	pivot[1] = array[cnt / 3];
	free(array);
}
