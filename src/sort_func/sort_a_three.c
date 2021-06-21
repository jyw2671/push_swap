/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 23:33:38 by yjung             #+#    #+#             */
/*   Updated: 2021/06/21 23:42:42 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	type1(t_stack **a, t_stack **b)
{
	print_oper(a, b, "ra");
	print_oper(a, b, "sa");
	print_oper(a, b, "rra");
}

static void	type2(t_stack **a, t_stack **b)
{
	print_oper(a, b, "ra");
	print_oper(a, b, "sa");
	print_oper(a, b, "rra");
	print_oper(a, b, "sa");
}

static void	type3(t_stack **a, t_stack **b)
{
	print_oper(a, b, "sa");
	print_oper(a, b, "ra");
	print_oper(a, b, "sa");
	print_oper(a, b, "rra");
}

static void	type4(t_stack **a, t_stack **b)
{
	print_oper(a, b, "sa");
	print_oper(a, b, "ra");
	print_oper(a, b, "sa");
	print_oper(a, b, "rra");
	print_oper(a, b, "sa");
}

void	sort_a_three(t_stack **a, t_stack **b)
{
	if ((*a)->value < (*a)->bottom->bottom->value && \
	(*a)->bottom->bottom->value < (*a)->bottom->value)
		type1(a, b);
	else if ((*a)->bottom->value < (*a)->value && \
	(*a)->value < (*a)->bottom->bottom->value)
		print_oper(a, b, "sa");
	else if ((*a)->bottom->bottom->value < (*a)->value && \
	(*a)->value < (*a)->bottom->value)
		type2(a, b);
	else if ((*a)->bottom->value < (*a)->bottom->bottom->value && \
	(*a)->bottom->bottom->value < (*a)->value)
		type3(a, b);
	else if ((*a)->bottom->bottom->value < (*a)->bottom->value && \
	(*a)->bottom->value < (*a)->value)
		type4(a, b);
}
