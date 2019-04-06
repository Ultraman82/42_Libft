/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 07:30:36 by chjeong           #+#    #+#             */
/*   Updated: 2019/02/21 12:21:21 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int					i;
	int					neg;
	unsigned long long	result;

	i = 0;
	while (ft_isspace(*str))
		str++;
	result = 0;
	neg = (*str == '-' ? -1 : 1);
	str = (*str == '-' || *str == '+') ? str + 1 : str;
	while (*str == '0')
		str++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + (str[i++] - '0');
	if (i > 19 || result >= 9223372036854775808ULL)
		return (neg == 1 ? -1 : 0);
	return (result * neg);
}
