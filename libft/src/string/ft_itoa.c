/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:08:12 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:08:14 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digist(int n)
{
	size_t	count;

	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_write_nbrber(char *dest, unsigned int n)
{
	if (n < 10)
		*dest = n + '0';
	else
	{
		*dest = n % 10 + '0';
		ft_write_nbrber(dest - 1, n / 10);
	}
}

/*
** ft_itoa - convert a integer to an string
*/

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*result;
	size_t			len;

	nbr = n;
	if (n < 0)
		nbr = -n;
	if (n == 0)
		return (ft_strdup("0"));
	else
	{
		len = ft_count_digist(n);
		((n < 0) && (++len));
		result = (char *)malloc(sizeof(char) * (len + 1));
		if (result == NULL)
			return (0);
		ft_write_nbrber((result + len - 1), nbr);
		if (n < 0)
			*result = '-';
		result[len] = '\0';
	}
	return (result);
}
