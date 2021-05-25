/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_lstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:03:45 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:03:46 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_d_lstadd_front(t_d_list **lst, t_d_list *new_list)
{
	if (*lst == NULL)
	{
		*lst = new_list;
		return ;
	}
	new_list->next = *lst;
	(*lst)->prev = new_list;
	*lst = new_list;
}
