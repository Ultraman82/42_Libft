/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:50:49 by chjeong           #+#    #+#             */
/*   Updated: 2019/02/17 09:12:16 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	int		head;
	int		tail;
	int		i;

	if (!s)
		return (NULL);
	i = -1;
	head = 0;
	tail = 0;
	while (ft_isspace(s[++i]))
		head++;
	while (s[i++])
		tail = ft_isspace(s[i - 1]) ? tail + 1 : 0;
	ret = ft_strnew(ft_strlen(s) - tail - head);
	if (!ret)
		return (NULL);
	return (ft_strncpy(ret, s + head, ft_strlen(s) - tail - head));
}
