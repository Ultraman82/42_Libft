/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 08:46:18 by chjeong           #+#    #+#             */
/*   Updated: 2019/02/17 09:04:17 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	index;

	if (!*little)
		return ((char *)big);
	while (*big)
	{
		index = 0;
		while (big[index] == little[index])
			if (!little[++index])
				return ((char *)big);
		big++;
	}
	return (0);
}
