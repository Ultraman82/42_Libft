/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 07:40:27 by chjeong           #+#    #+#             */
/*   Updated: 2019/02/16 07:52:10 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ret;

	if (lst && f)
	{
		if (lst->next)
		{
			ret = ft_lstmap(lst->next, f);
			ft_lstadd(&ret, f(lst));
		}
		else
			ret = f(lst);
		return (ret);
	}
	return (NULL);
}
