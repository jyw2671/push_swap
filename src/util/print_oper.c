/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_oper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 21:12:18 by yjung             #+#    #+#             */
/*   Updated: 2021/06/20 20:06:47 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_oper(t_stack **stack_a, t_stack **stack_b, char *oper, int	num)
{
	if (!ft_strcmp(oper, "ra"))
		rotate_a(stack_a);
	if (!ft_strcmp(oper, "rb"))
		rotate_b(stack_b);
	if (!ft_strcmp(oper, "rra"))
		reverse_rotate_a(stack_a, num);
	if (!ft_strcmp(oper, "rrb"))
		reverse_rotate_b(stack_b, num);
	if (!ft_strcmp(oper, "sa"))
		swap_a(stack_a);
	if (!ft_strcmp(oper, "sb"))
		swap_b(stack_b);
	ft_putendl_fd(oper, 1);
}

void	print_push(t_stack **a, t_stack **b, char *oper, t_info *info)
{
	if (!ft_strcmp(oper, "pa") && info->cnt_b > 0)
	{
		push(b, a);
		info->cnt_b--;
		info->cnt_a++;
		ft_putendl_fd(oper, 1);
	}
	if (!ft_strcmp(oper, "pb") && info->cnt_a > 0)
	{
		push(a, b);
		info->cnt_a--;
		info->cnt_b++;
		ft_putendl_fd(oper, 1);
	}
}
