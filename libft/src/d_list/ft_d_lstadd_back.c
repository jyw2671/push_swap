/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:03:38 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:03:40 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_d_lstadd_back(t_d_list **lst, t_d_list *new_list)
{
	t_d_list	*last;

	if (*lst == NULL)
	{
		*lst = new_list;
		return ;
	}
	last = ft_d_lstlast(*lst);
	last->next = new_list;
	new_list->prev = last;
}
