/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_oper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 21:12:18 by yjung             #+#    #+#             */
/*   Updated: 2021/06/15 21:46:57 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_oper(t_stack **stack, char *oper, int	num)
{
	if (!ft_strcmp(oper, "ra"))
		rotate_a(stack);
	if (!ft_strcmp(oper, "rb"))
		rotate_b(stack);
	if (!ft_strcmp(oper, "rra"))
		reverese_rotate_a(stack, num);
	if (!ft_strcmp(oper, "rrb"))
		reverese_rotate_b(stack, num);
	if (!ft_strcmp(oper, "sa"))
		swap_a(stack);
	if (!ft_strcmp(oper, "sb"))
		swap_b(stack);
	ft_putendl_fd(oper, 1);
}

int	print_push(t_stack **a, t_stack **b, char *oper, t_info *info)
{
	if (!ft_strcmp(oper, "pa"))
	{
		push_a(a, b, info);
		if (!a)
			return (FAIL);
	}
	if (!ft_strcmp(oper, "pb"))
	{
		push_b(b, a, info);
		if (!b)
			return (FAIL);
	}
	ft_putendl_fd(oper, 1);
	return (SUCCESS);
}
