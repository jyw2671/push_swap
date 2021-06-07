/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:20:37 by yjung             #+#    #+#             */
/*   Updated: 2021/06/07 17:36:21 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	do_push(t_stack **a, t_stack **b, t_info *info, int sort)
{
	int	status;

	if (sort == PUSH_A)
	{
		status = push_a(a, b, info);
		if (!status)
			return (0);
		write(0, "pa\n", 3);
	}
	else if (sort == PUSH_B)
	{
		status = push_b(a, b, info);
		if (!status)
			return (0);
		write(0, "pb\n", 3);
	}
	return (1);
}

static void	sort_stack2(t_stack **stack, t_stack **prev, \
	t_stack **next, t_info *info)
{
	t_stack	*tmp;

	sort_main(stack, info);
	sort_main(prev, info);
	sort_main(prev, info);
	tmp = *prev;
	if (!tmp)
		tmp = *stack;
	else
		stack_add_stack(&tmp, stack);
	if (!tmp)
		tmp = *next;
	else
		stack_add_stack(&tmp, next);
	// stack_free(stack);
	*stack = tmp;
}

static int	do_rotate(t_stack **stack, t_info *info)
{
	rotate_a(stack, info);
	write(0, "ra\n", 3);
	return (1);
}

static int	sort_stack1(t_stack **stack, t_info *info, int pivot_a, int pivot_b)
{
	t_stack	*tmp;
	t_stack	*prev;
	t_stack	*next;
	int		status;
	int		cnt;

	tmp = *stack;
	cnt = info->cnt_a;
	status = 1;
	while (tmp && cnt > 0)
	{
		if (pivot_a >= tmp->value && --cnt >= 0)
			status = do_push(&tmp, &prev, info, PUSH_B);
		else if (pivot_b <= tmp->value && --cnt >= 0)
			status = do_push(&tmp, &next, info, PUSH_B);
		else if (--cnt >= 0)
			status = do_rotate(&tmp, info);
		if (!status)
		{
			stack_free(&prev);
			stack_free(&next);
			return (0);
		}
	}
	// write(2, "here\n", 5);
	find_first_stack(&tmp);
	sort_stack2(&tmp, &prev, &next, info);
	// stack_free(stack);
	*stack = tmp;
	return (1);
}

void	sort_main(t_stack **stack, t_info *info)
{
	int	pivot_a;
	int	pivot_b;

	if (check_stack(*stack, info) == DONE)
		return ;
	setting_pivot(*stack, &pivot_a, &pivot_b);
	check_pivot(&pivot_a, &pivot_b);
	printf("print pivot : %d, %d\n", pivot_a, pivot_b);
	if (!sort_stack1(stack, info, pivot_a, pivot_b))
		info->status = 1;
}
