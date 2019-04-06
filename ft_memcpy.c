/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 07:46:34 by chjeong           #+#    #+#             */
/*   Updated: 2019/02/16 07:57:13 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;

	if (n == 0 || s1 == s2)
		return (s1);
	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (n--)
		*dst++ = *src++;
	return (s1);
}
