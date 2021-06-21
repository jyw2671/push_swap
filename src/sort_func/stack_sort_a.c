/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 22:00:38 by yjung             #+#    #+#             */
/*   Updated: 2021/06/22 00:13:10 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	next_sort_a(t_stack **a, t_stack **b, int info[4])
{
	setting_stack(a, b, info[RA], info[RB]);
	if (!check_stack(*a, info[RA], ASCENDING_ORDER))
		stack_sort_a(a, b, info[RA]);
	stack_sort_b(a, b, info[RB]);
	stack_sort_b(a, b, info[P_CNT] - info[RB]);
}

static void	sort_stack_a(t_stack **a, t_stack **b, int pivot[2], int info[4])
{
	while (--info[CNT] >= 0)
	{
		if ((*a)->value > pivot[0] && ++info[RA] >= 0)
			print_oper(a, b, "ra");
		else
		{
			print_oper(a, b, "pb");
			++info[P_CNT];
			if ((*b)->value > pivot[1])
			{
				if (info[CNT] >= 0 && (*a)->value > pivot[0])
				{
					--info[CNT];
					print_oper(a, b, "rr");
					++info[RA];
				}
				else
					print_oper(a, b, "rb");
				++info[RB];
			}
		}
	}
}

static void	cnt_checker_a(t_stack **a, t_stack **b, int cnt)
{
	if (cnt == 3)
		return (sort_a_three(a, b));
	else if (cnt == 2 && (*a)->value > (*a)->bottom->value)
		return (print_oper(a, b, "sa"));
}

void	setting_stack(t_stack **a, t_stack **b, int ra, int rb)
{
	while (ra > 0 || rb > 0)
	{
		if (ra > 0 && rb > 0)
			print_oper(a, b, "rrr");
		else if (ra > 0)
			print_oper(a, b, "rra");
		else if (rb > 0)
			print_oper(a, b, "rrb");
		--ra;
		--rb;
	}
}

void	stack_sort_a(t_stack **a, t_stack **b, int cnt)
{
	int	pivot[2];
	int	info[4];

	if (check_stack(*a, cnt, ASCENDING_ORDER))
		return ;
	if (cnt <= 3)
		return (cnt_checker_a(a, b, cnt));
	set_pivot(pivot, *a, cnt);
	ft_memset(&info, 0, sizeof(info));
	info[CNT] = cnt;
	sort_stack_a(a, b, pivot, info);
	next_sort_a(a, b, info);
}
