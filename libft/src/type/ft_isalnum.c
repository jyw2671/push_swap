/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:10:34 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:10:35 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_isalnum - checks for an alphanumeric character
*/

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
