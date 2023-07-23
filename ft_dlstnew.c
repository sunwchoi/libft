/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:15:05 by sunwchoi          #+#    #+#             */
/*   Updated: 2023/07/23 17:50:37 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstnew(void *content)
{
	t_dlist	*ret;

	ret = (t_dlist *)malloc(sizeof(t_dlist));
	if (!ret)
		return (NULL);
	ret->content = content;
	ret->next = NULL;
	ret->pre = NULL;
	return (ret);
}
