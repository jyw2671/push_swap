/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 23:43:19 by yjung             #+#    #+#             */
/*   Updated: 2021/06/21 23:47:24 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	type1(t_stack **a, t_stack **b)
{
	print_oper(a, b, "sb");
	print_oper(a, b, "rb");
	print_oper(a, b, "sb");
	print_oper(a, b, "rrb");
	print_oper(a, b, "sb");
}

static void	type2(t_stack **a, t_stack **b)
{
	print_oper(a, b, "sb");
	print_oper(a, b, "rb");
	print_oper(a, b, "sb");
	print_oper(a, b, "rrb");
}

static void	type3(t_stack **a, t_stack **b)
{
	print_oper(a, b, "rb");
	print_oper(a, b, "sb");
	print_oper(a, b, "rrb");
	print_oper(a, b, "sb");
}

static void	type4(t_stack **a, t_stack **b)
{
	print_oper(a, b, "rb");
	print_oper(a, b, "sb");
	print_oper(a, b, "rrb");
}

void	sort_b_three(t_stack **a, t_stack **b)
{
	if ((*b)->value < (*b)->bottom->value && \
	(*b)->bottom->value < (*b)->bottom->bottom->value)
		type1(a, b);
	else if ((*b)->value < (*b)->bottom->bottom->value && \
	(*b)->bottom->bottom->value < (*b)->bottom->value)
		type2(a, b);
	else if ((*b)->bottom->value < (*b)->value && \
	(*b)->value < (*b)->bottom->bottom->value)
		type3(a, b);
	else if ((*b)->bottom->bottom->value < (*b)->value && \
	(*b)->value < (*b)->bottom->value)
		print_oper(a, b, "sb");
	else if ((*b)->bottom->value < (*b)->bottom->bottom->value && \
	(*b)->bottom->bottom->value < (*b)->value)
		type4(a, b);
}
