/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:04:26 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:04:27 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_d_list	*ft_d_lstnew(void	*content)
{
	t_d_list	*lst;

	lst = malloc(sizeof(t_d_list));
	if (lst == NULL)
		return (0);
	lst->next = 0;
	lst->prev = 0;
	lst->content = content;
	return (lst);
}
