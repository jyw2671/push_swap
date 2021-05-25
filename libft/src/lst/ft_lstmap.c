/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:05:46 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:05:48 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lstmap - Iterates the list 'lst' and applies the function
** 'f' to the content of each element.
** Creates a new list resulting of the successive applications of
** the function 'f'.
** The 'del' function is used to
** delete the content of an element if needed.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*curr;

	result = ft_lstnew(f(lst->content));
	if (result == NULL)
		return (0);
	curr = result;
	lst = lst->next;
	while (lst)
	{
		curr->next = ft_lstnew(f(lst->content));
		if (curr->next == NULL)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		curr = curr->next;
		lst = lst->next;
	}
	return (result);
}
