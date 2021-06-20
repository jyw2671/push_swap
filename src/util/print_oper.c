/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_oper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 21:12:18 by yjung             #+#    #+#             */
/*   Updated: 2021/06/20 21:33:10 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_oper(t_stack **stack_a, t_stack **stack_b, char *oper, int num)
{
	if (!ft_strcmp(oper, "ra") || !ft_strcmp(oper, "rr"))
		rotate(stack_a);
	if (!ft_strcmp(oper, "rb") || !ft_strcmp(oper, "rr"))
		rotate(stack_b);
	if (!ft_strcmp(oper, "rra"))
		reverse_rotate(stack_a, num);
	if (!ft_strcmp(oper, "rrb"))
		reverse_rotate(stack_b, num);
	if (!ft_strcmp(oper, "sa") || !ft_strcmp(oper, "ss"))
		swap(stack_a);
	if (!ft_strcmp(oper, "sb") || !ft_strcmp(oper, "ss"))
		swap(stack_b);
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
