/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 07:37:32 by chjeong           #+#    #+#             */
/*   Updated: 2019/02/21 12:33:32 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int c;

	c = (n < 0) ? 2 : 1;
	while (n && (n /= 10))
		c++;
	return (c);
}

char		*ft_itoa(int n)
{
	char	*ret;
	int		neg;
	int		i;

	i = 0;
	ret = ft_strnew(digit_count(n));
	if (!ret)
		return (NULL);
	neg = (n < 0) ? 1 : 0;
	while (n)
	{
		ret[i++] = (n % 10 > 0) ? (n % 10 + '0') : (n % 10 * (-1) + '0');
		n /= 10;
	}
	if (neg)
		ret[i] = '-';
	if (ret[0] == 0)
		ret[0] = '0';
	return (ft_strrev(ret));
}
