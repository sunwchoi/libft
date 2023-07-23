/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:13:38 by sunwchoi          #+#    #+#             */
/*   Updated: 2023/07/23 17:43:11 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstmap(t_dlist *dlst, void *(*f)(void *), void (*del)(void *))
{
	t_dlist	*new;
	t_dlist	*first_new;

	if (!dlst)
		return (NULL);
	new = ft_dlstnew(f(dlst->content));
	if (!new)
		return (NULL);
	first_new = new;
	dlst = dlst->next;
	while (dlst)
	{
		new = ft_dlstnew(f(dlst->content));
		if (!new)
		{
			ft_dlstclear(&first_new, del);
			return (NULL);
		}
		ft_dlstadd_back(&first_new, new);
		dlst = dlst->next;
	}
	return (first_new);
}
