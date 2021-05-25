/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:07:14 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:07:15 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
** ft_memccpy - copy memory area
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	dp = dest;
	sp = src;
	while (n-- > 0)
	{
		*dp++ = *sp++;
		if (*dp == (unsigned char)c)
			return (dp);
	}
	return (0);
}
