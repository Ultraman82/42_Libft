/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:31:09 by chjeong           #+#    #+#             */
/*   Updated: 2019/03/11 20:18:31 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char            *ft_strjoin(char const *s1, char const *s2)
{
    char        *s3;
    char        *tmp_s3;
    size_t      i;
    size_t      j;

    j = 0;
    i = 0;
    while (s1[i])
        i += 1;
    while (s2[j])
        j += 1;
    if (!s1 || !s2 || !(s3 = (char *)malloc(sizeof(char) * (i + j + 1))))
        return (NULL);
    tmp_s3 = s3;
    while (*s1 != '\0')
        *tmp_s3++ = *s1++;
    while (*s2 != '\0')
        *tmp_s3++ = *s2++;
    *tmp_s3 = '\0';
    return (s3);
}
