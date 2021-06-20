/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:46:09 by yjung             #+#    #+#             */
/*   Updated: 2021/06/20 21:32:17 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	check_stack(t_stack **stack_a, int cnt)
{
	t_stack	*tmp;

	if (cnt <= 1)
		return ;
	tmp = *stack_a;
	if (tmp->value > tmp->bottom->value)
		print_oper(&tmp, NULL, "sa", 0);
	if (cnt == 2)
	{
		*stack_a = tmp;
		return ;
	}
	if (tmp->bottom->value > stack_last(tmp)->value)
		print_oper(&tmp, NULL, "rra", 3);
	if (tmp->value > tmp->bottom->value)
		print_oper(&tmp, NULL, "sa", 0);
	*stack_a = tmp;
}

void	sort_stack(t_stack **a, t_stack **b, t_info *info, int cnt)
{
	int	num;

	while (--cnt >= 0)
	{
		num = (*a)->value;
		if (num > info->pivot_a)
		{
			print_push(a, b, "pb", info);
			if (num > info->pivot_b)
				print_oper(a, b, "rb", 0);
		}
		else
			print_oper(a, b, "ra", 0);
	}
}

int	sort_main(t_stack **stack_a, int cnt)
{
	t_stack		*stack_b;
	t_info		new_info;

	stack_b = 0;
	ft_memset(&new_info, 0, sizeof(t_info));
	if (cnt <= 3)
	{
		check_stack(stack_a, cnt);
		return (SUCCESS);
	}
	new_info.cnt_a = cnt;
	if (set_pivot(*stack_a, &new_info) == FAIL)
		return (FAIL);
	sort_stack(stack_a, &stack_b, &new_info, cnt);
	if (sort_main(stack_a, new_info.cnt_a) == FAIL)
		return (FAIL);
	if (sort_main(&stack_b, new_info.cnt_b) == FAIL)
		return (FAIL);
	if (stack_b)
	{
		stack_last(*stack_a)->bottom = stack_b;
		stack_b->top = stack_last(*stack_a);
	}
	return (SUCCESS);
}
