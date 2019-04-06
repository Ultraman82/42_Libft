/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 08:08:28 by chjeong           #+#    #+#             */
/*   Updated: 2019/03/11 20:18:08 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char            *ft_strdup(const char *s1)
{
    char        *s2;
    size_t      i;

    i = 0;
    while (s1[i])
        i += 1;
    if (!(s2 = (char *)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    i = -1;
    while (s1[++i])
        s2[i] = s1[i];
    s2[i] = '\0';
    return (s2);
}
