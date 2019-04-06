/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 08:26:00 by chjeong           #+#    #+#             */
/*   Updated: 2019/02/17 08:17:04 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*ret;
	size_t	x;

	x = -1;
	ret = dest;
	while (++x < n)
	{
		if (*src)
			*(dest++) = *(src++);
		else
			*(dest++) = 0;
	}
	return (ret);
}
