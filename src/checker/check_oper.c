/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_oper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:22:39 by yjung             #+#    #+#             */
/*   Updated: 2021/06/23 20:07:23 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	do_oper(t_stack **stack_a, t_stack **stack_b, char *oper)
{
	if (!ft_strcmp(oper, "ra") || !ft_strcmp(oper, "rr"))
		rotate(stack_a);
	if (!ft_strcmp(oper, "rb") || !ft_strcmp(oper, "rr"))
		rotate(stack_b);
	if (!ft_strcmp(oper, "rra") || !ft_strcmp(oper, "rrr"))
		reverse_rotate(stack_a);
	if (!ft_strcmp(oper, "rrb") || !ft_strcmp(oper, "rrr"))
		reverse_rotate(stack_b);
	if (!ft_strcmp(oper, "sa") || !ft_strcmp(oper, "ss"))
		swap(stack_a);
	if (!ft_strcmp(oper, "sb") || !ft_strcmp(oper, "ss"))
		swap(stack_b);
	if (!ft_strcmp(oper, "pa"))
		push(stack_b, stack_a);
	if (!ft_strcmp(oper, "pb"))
		push(stack_a, stack_b);
}

static int	exec_oper(t_stack **a, t_stack **b, char *oper)
{
	if (!ft_strcmp(oper, "ra") || !ft_strcmp(oper, "rb") || \
	!ft_strcmp(oper, "rr") || !ft_strcmp(oper, "rra") || \
	!ft_strcmp(oper, "rrb") || !ft_strcmp(oper, "rrr") || \
	!ft_strcmp(oper, "sa") || !ft_strcmp(oper, "sb") || \
	!ft_strcmp(oper, "ss") || !ft_strcmp(oper, "pa") || \
	!ft_strcmp(oper, "pb"))
		do_oper(a, b, oper);
	else
		return (FAIL);
	return (SUCCESS);
}

int	check_oper(t_stack **a, t_stack **b, t_list *oper)
{
	while (oper)
	{
		if (!exec_oper(a, b, oper->content))
			return (FAIL);
		oper = oper->next;
	}
	return (SUCCESS);
}
