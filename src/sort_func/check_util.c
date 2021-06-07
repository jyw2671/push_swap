/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:54:05 by yjung             #+#    #+#             */
/*   Updated: 2021/06/07 17:29:56 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_stack(t_stack *stack, t_info *info)
{
	if (info->cnt_a <= 1)
		return (DONE);
	while (stack)
	{
		if (stack->bottom)
		{
			if (stack->value > stack->bottom->value)
				return (SUCCESS);
			stack = stack->bottom;
		}
		else
			break ;
	}
	return (DONE);
}

void	setting_pivot(t_stack *stack, int *pivot_a, int *pivot_b)
{
	*pivot_a = stack->value;
	while (stack)
	{
		if (stack->bottom && (stack->bottom->value != *pivot_a))
		{
			*pivot_b = stack->bottom->value;
			return ;
		}
		stack = stack->bottom;
	}
	*pivot_b = *pivot_a;
}

void	check_pivot(int *pivot_a, int *pivot_b)
{
	int	num;

	if (*pivot_a > *pivot_b)
	{
		num = *pivot_b;
		*pivot_b = *pivot_a;
		*pivot_a = num;
	}
}
