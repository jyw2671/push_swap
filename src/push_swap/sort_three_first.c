/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_first.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 22:15:01 by yjung             #+#    #+#             */
/*   Updated: 2021/06/22 22:26:55 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	type1(t_stack **a, t_stack **b)
{
	print_oper(a, b, "rra");
	if (check_stack(*a, 3, ASCENDING_ORDER))
		return ;
	print_oper(a, b, "sa");
}

void	sort_three_first(t_stack **a, t_stack **b)
{
	if (check_stack(*a, 3, ASCENDING_ORDER))
		return ;
	if ((*a)->value < (*a)->bottom->value)
		return (type1(a, b));
	else if ((*a)->value > (*a)->bottom->value && \
	(*a)->value > (*a)->bottom->bottom->value && \
	(*a)->bottom->value < (*a)->bottom->bottom->value)
		return (print_oper(a, b, "ra"));
	print_oper(a, b, "sa");
	if (check_stack(*a, 3, ASCENDING_ORDER))
		return ;
	print_oper(a, b, "rra");
}
