/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:56:49 by yjung             #+#    #+#             */
/*   Updated: 2021/06/15 22:23:40 by yjung            ###   ########.fr       */
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
			return (0);
	}
	return (1);
}

static int	check_num(char *str, long long *num)
{
	if (!is_int(str))
		return (0);
	*num = ft_atoi(str);
	if (*num > INT_MAX || *num < INT_MIN)
		return (0);
	return (1);
}

static int	add_stack(t_stack **stack, int num, t_info *info)
{
	t_stack	*tmp;

	if (!(*stack))
	{
		tmp = stack_new(num);
		if (!tmp)
			return (stack_free_ret(&tmp, 0));
		*stack = tmp;
		info->max = num;
		info->min = num;
	}
	else
	{
		tmp = stack_new(num);
		if (!tmp)
			return (stack_free_ret(&tmp, 0));
		stack_last(*stack)->bottom = tmp;
		if (num >= info->max)
			info->max = num;
		if (num <= info->min)
			info->min = num;
	}
	return (1);
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
		if (!check_num(tmp[i], &num))
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
