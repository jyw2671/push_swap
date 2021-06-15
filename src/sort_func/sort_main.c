/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:46:09 by yjung             #+#    #+#             */
/*   Updated: 2021/06/15 22:28:49 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_stack(t_stack **stack_a, int cnt)
{
	t_stack	*tmp;
	int		int_tmp;

	tmp = *stack_a;
	if (cnt <= 3)
	{
		if (tmp->value > tmp->bottom->value)
			print_oper(&tmp, "sa", NULL);
		// TODO:갯수 3 이하일때 정렬 필요
		return (SUCCESS);
	}
	return (0);
}

int	sort_stack(t_stack **a, t_stack **b, t_info *info, int cnt)
{
	t_stack	*tmp;
	int		status;
	int		num;

	tmp = *a;
	status = 0;
	while (--cnt > 0)
	{
		num = tmp->value;
		if (num > info->pivot_a)
		{
			if (print_push(&tmp, b, "pb", info) == FAIL && ++status >= 0)
				break ;
			if (num > info->pivot_b)
				print_oper(b, "rb", NULL);
		}
		else
			print_oper(a, "ra", NULL);
	}
	if (status && b)
		exit_free(b, 1);
	return (SUCCESS);
}

int	sort_main(t_stack **stack_a, int cnt)
{
	t_stack		*stack_b;
	t_info		new_info;

	stack_b = 0;
	ft_memset(&new_info, 0, sizeof(t_stack));
	// TODO: 3 이하일때 정렬 안해도 되는 경우 예외처리 필요
	if (check_stack(stack_a, cnt) == SUCCESS)
		return (SUCCESS);
	new_info.cnt_a = cnt;
	if (setting_pivot(*stack_a, &new_info) == FAIL)
		return (FAIL);
	if (sort_stack(stack_a, &stack_b, &new_info, cnt) == FAIL)
		return (FAIL);
	// TODO: a, b 각각 sort main을 재귀로 했을 시에 free 로직 정리
	return (SUCCESS);
}
