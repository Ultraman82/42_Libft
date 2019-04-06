/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 08:28:06 by chjeong           #+#    #+#             */
/*   Updated: 2019/02/17 08:21:46 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i1;
	size_t	i2;

	if (!*little)
		return ((char *)big);
	i2 = 0;
	while (big[i2])
	{
		i1 = 0;
		while (big[i2 + i1] == little[i1] && i2 + i1 < len)
			if (!little[++i1])
				return ((char *)(big + i2));
		i2++;
	}
	return (0);
}
