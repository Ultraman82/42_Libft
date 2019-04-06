/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 08:38:09 by chjeong           #+#    #+#             */
/*   Updated: 2019/02/17 09:09:18 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	temp;

	i = 0;
	length = ft_strlen(str);
	while (length - 1 > i)
	{
		temp = str[i];
		str[i] = str[length - 1];
		str[length - 1] = temp;
		length--;
		i++;
	}
	return (str);
}
