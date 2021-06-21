/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 23:49:06 by yjung             #+#    #+#             */
/*   Updated: 2021/06/22 00:05:34 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_array(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static void	*make_array(t_stack *stack, int cnt)
{
	int	*result;
	int	i;

	ft_malloc((void **)&result, (sizeof(int) * (cnt + 1)));
	i = 0;
	while (stack)
	{
		result[i] = stack->value;
		stack = stack->bottom;
		++i;
	}
	return (result);
}

static int	set_one_pivot(t_stack *stack, int cnt)
{
	int	*array;
	int	a;
	int	b;

	array = make_array(stack, cnt);
	a = -1;
	while (++a < cnt - 1)
	{
		b = a;
		while (++b < cnt)
		{
			if (array[a] > array[b])
				swap_array(&array[a], &array[b]);
		}
	}
	a = array[2];
	free(array);
	return (a);
}

void	sort_five_stack(t_stack **a, t_stack **b)
{
	int	pivot;
	int	i;

	pivot = set_one_pivot(*a, 5);
	i = -1;
	while (++i < 5)
	{
		if ((*a)->value < pivot)
			print_oper(a, b, "pb");
		else
			print_oper(a, b, "ra");
	}
	sort_a_three(a, b);
	if ((*b)->value < (*b)->bottom->value)
		print_oper(a, b, "rb");
	print_oper(a, b, "pa");
	print_oper(a, b, "pa");
}
