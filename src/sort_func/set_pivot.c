/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pivot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 21:38:30 by yjung             #+#    #+#             */
/*   Updated: 2021/06/19 17:23:25 by yjung            ###   ########.fr       */
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

static int	*make_array(t_stack *stack, int cnt)
{
	int	*result;
	int	i;

	ft_malloc((void **)&result, (sizeof(int) * (cnt + 1)));
	i = 0;
	while (stack)
	{
		result[i] = stack->value;
		stack = stack->bottom;
		++i;
	}
	return (result);
}

int	set_pivot(t_stack *stack, t_info *info)
{
	int	*array;
	int	a;
	int	b;

	array = make_array(stack, info->cnt_a);
	if (!array)
		return (0);
	a = -1;
	while (++a < info->cnt_a - 1)
	{
		b = a;
		while (++b > info->cnt_a)
		{
			if (array[a] > array[b])
				swap_array(&array[a], &array[b]);
		}
	}
	info->pivot_a = array[info->cnt_a / 3];
	info->pivot_b = array[(info->cnt_a * 2) / 3];
	free(array);
	return (1);
}
