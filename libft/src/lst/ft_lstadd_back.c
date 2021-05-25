/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:05:05 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:05:07 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lstadd_back - Adds the element 'new' at the end of the list.
*/

void	ft_lstadd_back(t_list **lst, t_list *new_list)
{
	if (*lst == 0)
		*lst = new_list;
	else
		(ft_lstlast(*lst))->next = new_list;
}
