/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:46:09 by yjung             #+#    #+#             */
/*   Updated: 2021/06/20 22:16:50 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	last_sort(t_stack **stack_a, int cnt)
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

// 오름차순이든 내림차순이든 잘 정렬되어 있는지 확인
int	check_stack(t_stack *stack, int cnt)
{
	while (stack && --cnt >= 0)
	{
		if (stack->value > stack->bottom->value)
			return (0);
		stack = stack->bottom;
	}
	return (1);
}

// b에 있는 stack을 cnt만큼 3분위로 sort
int	sort_b(t_stack **stack_a, t_stack **stack_b, int cnt)
{
	int		new_cnt;
	t_info	new_info;

	ft_memset(&new_info, 0, sizeof(t_info));
	if (check_stack(*stack_b, cnt) == 1)
		return (SUCCESS);
	if (cnt <= 3)
	{
		last_sort(stack_b, cnt);
		return (SUCCESS);
	}
	if (set_pivot(*stack_a, &new_info, cnt) == FAIL)
		return (FAIL);
	return (SUCCESS);
}

// a에 있는 stack을 cnt만큼 3분위로 sort
int	sort_a(t_stack **stack_a, t_stack **stack_b, int cnt)
{
	int	new_cnt;

	if (check_stack(*stack_a, cnt) == 1)
		return (SUCCESS);
	if (cnt <= 3)
	{
		last_sort(stack_a, cnt);
		return (SUCCESS);
	}
	return (SUCCESS);
}

int	sort_main(t_stack **stack_a, t_stack **stack_b, int cnt)
{
	t_info	new_info;

	ft_memset(&new_info, 0, sizeof(t_info));
	if (cnt <= 3)
	{
		last_sort(stack_a, cnt);
		return (SUCCESS);
	}
	new_info.cnt_a = cnt;
	if (set_pivot(*stack_a, &new_info, cnt) == FAIL)
		return (FAIL);
	sort_stack(stack_a, stack_b, &new_info, cnt);
	return (SUCCESS);
}
