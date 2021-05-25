/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:05:12 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:05:13 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lstadd_front - Adds the element 'new' at the beginning of the list.
*/

void	ft_lstadd_front(t_list **lst, t_list *new_list)
{
	new_list->next = *lst;
	*lst = new_list;
}
