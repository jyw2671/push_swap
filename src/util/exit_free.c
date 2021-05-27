/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:33:18 by yjung             #+#    #+#             */
/*   Updated: 2021/05/27 12:21:28 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stack_free(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = (*stack)->bottom;
		free(*stack);
		*stack = tmp;
	}
	*stack = 0;
}

int	stack_free_ret(t_stack **stack, int ret)
{
	if (*stack != NULL)
		free(*stack);
	return (ret);
}

int	free_split(char ***str)
{
	int	i;

	i = -1;
	if (*str == NULL)
		return (0);
	while ((*str)[++i])
		free((*str)[i]);
	free(*str);
	return (0);
}

void	exit_free(t_stack **stack)
{
	ft_putendl_fd("Error", 2);
	find_first_stack(stack);
	stack_free(stack);
	exit(0);
}
