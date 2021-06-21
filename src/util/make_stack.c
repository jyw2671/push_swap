/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:56:49 by yjung             #+#    #+#             */
/*   Updated: 2021/06/22 00:08:44 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_int(char *str)
{
	int	i;

	i = -1;
	if (str[0] == '-')
		i++;
	while (str[++i])
	{
		if (!ft_isdigit(str[i]))
			return (FAIL);
	}
	return (SUCCESS);
}

static int	check_num(char *str, long long *num, t_stack *stack)
{
	if (!is_int(str))
		return (FAIL);
	*num = ft_atoi(str);
	if (*num > INT_MAX || *num < INT_MIN)
		return (FAIL);
	while (stack)
	{
		if (stack->value == *num)
			return (FAIL);
		stack = stack->bottom;
	}
	return (SUCCESS);
}

static int	add_stack(t_stack **stack, int num, t_info *info)
{
	t_stack	*tmp;

	if (!(*stack))
	{
		tmp = stack_new(num);
		if (!tmp)
			return (stack_free_ret(&tmp, FAIL));
		*stack = tmp;
		info->max = num;
		info->min = num;
	}
	else
	{
		tmp = stack_new(num);
		if (!tmp)
			return (stack_free_ret(&tmp, FAIL));
		stack_last(*stack)->bottom = tmp;
		if (num >= info->max)
			info->max = num;
		if (num <= info->min)
			info->min = num;
	}
	return (SUCCESS);
}

static int	store_stack(t_stack **stack, char *av, t_info *info)
{
	char		**tmp;
	long long	num;
	int			i;

	tmp = ft_split(av, ' ');
	i = -1;
	while (tmp[++i])
	{
		if (!check_num(tmp[i], &num, *stack))
			return (free_split(&tmp));
		if (!add_stack(stack, num, info))
			return (free_split(&tmp));
		free(tmp[i]);
		info->cnt_a++;
	}
	free(tmp);
	return (1);
}

t_stack	*make_stack(char *av[], t_info *info)
{
	t_stack	*result;
	int		i;

	i = 0;
	result = 0;
	while (av[++i])
	{
		if (!store_stack(&result, av[i], info))
			exit_free(&result, FAIL);
	}
	return (result);
}
