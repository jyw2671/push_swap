/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_oper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 21:12:18 by yjung             #+#    #+#             */
/*   Updated: 2021/06/21 20:39:56 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_oper(t_stack **stack_a, t_stack **stack_b, char *oper)
{
	if (!ft_strcmp(oper, "ra") || !ft_strcmp(oper, "rr"))
		rotate(stack_a);
	if (!ft_strcmp(oper, "rb") || !ft_strcmp(oper, "rr"))
		rotate(stack_b);
	if (!ft_strcmp(oper, "rra"))
		reverse_rotate(stack_a);
	if (!ft_strcmp(oper, "rrb"))
		reverse_rotate(stack_b);
	if (!ft_strcmp(oper, "sa") || !ft_strcmp(oper, "ss"))
		swap(stack_a);
	if (!ft_strcmp(oper, "sb") || !ft_strcmp(oper, "ss"))
		swap(stack_b);
	if (!ft_strcmp(oper, "pa"))
		push(stack_b, stack_a);
	if (!ft_strcmp(oper, "pb"))
		push(stack_a, stack_b);
	ft_putendl_fd(oper, 1);
}
