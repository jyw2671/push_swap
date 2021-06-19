/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_oper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 21:12:18 by yjung             #+#    #+#             */
/*   Updated: 2021/06/19 16:36:53 by yjung            ###   ########.fr       */
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
		reverse_rotate_a(stack, num);
	if (!ft_strcmp(oper, "rrb"))
		reverse_rotate_b(stack, num);
	if (!ft_strcmp(oper, "sa"))
		swap_a(stack);
	if (!ft_strcmp(oper, "sb"))
		swap_b(stack);
	ft_putendl_fd(oper, 1);
}

void	print_push(t_stack **a, t_stack **b, char *oper, t_info *info)
{
	if (!ft_strcmp(oper, "pa"))
	{
		push(a, b);
		if (info->cnt_a > 0)
		{
			info->cnt_a--;
			info->cnt_b++;
			ft_putendl_fd(oper, 1);
		}
	}
	if (!ft_strcmp(oper, "pb"))
	{
		push(b, a);
		if (info->cnt_b > 0)
		{
			info->cnt_b--;
			info->cnt_a++;
			ft_putendl_fd(oper, 1);
		}
	}
}
