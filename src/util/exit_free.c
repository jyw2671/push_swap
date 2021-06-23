/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:33:18 by yjung             #+#    #+#             */
/*   Updated: 2021/06/23 22:32:59 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void	stack_free(t_stack **stack)
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

void	exit_free(t_stack **stack, int status)
{
	if (!status)
		ft_putendl_fd("Error", 2);
	stack_free(stack);
	if (!status)
		exit(1);
}

void	exit_malloc_fail(t_stack **stack_a, t_stack **stack_b)
{
	ft_putendl_fd("Malloc Failed", 2);
	stack_free(stack_a);
	stack_free(stack_b);
	exit(1);
}
