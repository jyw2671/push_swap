/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:10:45 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:10:46 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_isascii - checks whether c is a 7-bit unsigned char
** value that fits into the ASCII character set.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
