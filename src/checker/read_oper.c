/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_oper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:06:31 by yjung             #+#    #+#             */
/*   Updated: 2021/06/23 20:59:50 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	check_lst_oper(t_stack **stack, char *oper)
{
	if (!ft_strcmp(oper, "ra") || !ft_strcmp(oper, "rb") || \
	!ft_strcmp(oper, "rr") || !ft_strcmp(oper, "rra") || \
	!ft_strcmp(oper, "rrb") || !ft_strcmp(oper, "rrr") || \
	!ft_strcmp(oper, "sa") || !ft_strcmp(oper, "sb") || \
	!ft_strcmp(oper, "ss") || !ft_strcmp(oper, "pa") || \
	!ft_strcmp(oper, "pb"))
		return (SUCCESS);
	stack_free(stack);
	return (FAIL);
}

static void	clear_lst(t_list *lst, char *str)
{
	if (str)
		free(str);
	ft_lstclear(&lst, free);
	ft_putendl_fd("Error", 2);
	exit(1);
}

t_list	*read_oper(t_stack **stack)
{
	int		status;
	char	*oper;
	t_list	*lst;
	t_list	*tmp;

	lst = NULL;
	status = get_next_line(0, &oper);
	while (status > 0)
	{
		if (!check_lst_oper(stack, oper))
			clear_lst(lst, oper);
		tmp = ft_lstnew(oper);
		if (tmp == NULL)
			clear_lst(lst, oper);
		ft_lstadd_back(&lst, tmp);
		status = get_next_line(0, &oper);
	}
	if (ft_strlen(oper) || status == -1)
		clear_lst(lst, NULL);
	free(oper);
	return (lst);
}
