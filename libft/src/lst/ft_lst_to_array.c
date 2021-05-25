/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:04:59 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:05:00 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_lst_to_array(t_list *lst)
{
	int		i;
	t_list	*tmp;
	void	**result;

	result = malloc(sizeof(void *) * (ft_lstsize(lst) + 1));
	if (result == NULL)
		return (0);
	i = 0;
	while (lst)
	{
		result[i++] = (lst)->content;
		tmp = lst;
		lst = lst->next;
		free(lst);
	}
	result[i] = 0;
	return (result);
}
