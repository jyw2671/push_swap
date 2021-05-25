/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:10:00 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:10:01 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strnstr - locate a substring in a string
*/

char	*ft_strnstr(const char *big, const char *little, size_t blen)
{
	size_t	llen;

	if (*little == '\0')
		return ((char *)big);
	llen = ft_strlen(little);
	while (*big && blen-- >= llen)
	{
		if (*big == *little && ft_strncmp(big, little, llen) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
