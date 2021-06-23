/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 22:28:35 by yjung             #+#    #+#             */
/*   Updated: 2021/06/23 16:24:32 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	next_sort_b(t_stack **a, t_stack **b, int info[4])
{
	if (!check_stack(*a, info[P_CNT] - info[RA], ASCENDING_ORDER))
		stack_sort_a(a, b, info[P_CNT] - info[RA]);
	setting_stack(a, b, info[RA], info[RB]);
	if (!check_stack(*a, info[RA], ASCENDING_ORDER))
		stack_sort_a(a, b, info[RA]);
	if (!check_stack(*b, info[RB], DESCENDING_ORDER))
		stack_sort_b(a, b, info[RB]);
	else
		push_a_all(a, b, info[RB]);
}

static void	sort_stack_b(t_stack **a, t_stack **b, int pivot[2], int info[4])
{
	while (--info[CNT] >= 0)
	{
		if ((*b)->value < pivot[1] && ++info[RB] >= 0)
			print_oper(a, b, "rb");
		else
		{
			print_oper(a, b, "pa");
			++info[P_CNT];
			if ((*a)->value < pivot[0])
			{
				print_oper(a, b, "ra");
				++info[RA];
			}
		}
	}
}

static void	cnt_checker_b(t_stack **a, t_stack **b, int cnt)
{
	if (cnt == 3)
		return (sort_b_three(a, b));
	if (cnt == 2)
	{
		if ((*b)->value < (*b)->bottom->value)
			print_oper(a, b, "sb");
		print_oper(a, b, "pa");
		return (print_oper(a, b, "pa"));
	}
	if (cnt == 1)
		return (print_oper(a, b, "pa"));
}

void	push_a_all(t_stack **a, t_stack **b, int cnt)
{
	while (cnt > 0)
	{
		print_oper(a, b, "pa");
		--cnt;
	}
}

void	stack_sort_b(t_stack **a, t_stack **b, int cnt)
{
	int	pivot[2];
	int	info[4];

	if (cnt <= 3)
		return (cnt_checker_b(a, b, cnt));
	if (check_stack(*b, cnt, DESCENDING_ORDER))
		return (push_a_all(a, b, cnt));
	if (!set_pivot(pivot, *b, cnt))
		return (exit_malloc_fail(a, b));
	ft_memset(&info, 0, sizeof(info));
	info[CNT] = cnt;
	sort_stack_b(a, b, pivot, info);
	next_sort_b(a, b, info);
}
