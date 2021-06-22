/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 23:43:19 by yjung             #+#    #+#             */
/*   Updated: 2021/06/22 22:27:22 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	type1(t_stack **a, t_stack **b)
{
	print_oper(a, b, "pa");
	print_oper(a, b, "sb");
	print_oper(a, b, "pa");
	if ((*a)->value > (*a)->bottom->value)
		print_oper(a, b, "sa");
	print_oper(a, b, "pa");
}

static void	type2(t_stack **a, t_stack **b)
{
	push_a_all(a, b, 2);
	print_oper(a, b, "sa");
	print_oper(a, b, "pa");
	if ((*a)->value > (*a)->bottom->value)
		print_oper(a, b, "sa");
}

void	sort_b_three(t_stack **a, t_stack **b)
{
	if (check_stack(*b, 3, DESCENDING_ORDER))
		return (push_a_all(a, b, 3));
	if ((*b)->value > (*b)->bottom->value)
		return (type1(a, b));
	if ((*b)->bottom->value > (*b)->bottom->bottom->value)
		return (type2(a, b));
	print_oper(a, b, "rb");
	push_a_all(a, b, 2);
	print_oper(a, b, "sa");
	print_oper(a, b, "rrb");
	print_oper(a, b, "pa");
}
