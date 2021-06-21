/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:46:09 by yjung             #+#    #+#             */
/*   Updated: 2021/06/22 00:19:16 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_main(t_stack **a, t_stack **b, int size)
{
	if (check_stack(*a, size, ASCENDING_ORDER))
		return ;
	else if (size == 5)
		return (sort_five_stack(a, b));
	else if (size == 3)
		return (sort_a_three(a, b));
	else if (size == 2 && (*a)->value > (*a)->bottom->value)
		return (print_oper(a, b, "sa"));
	stack_sort_a(a, b, size);
}
