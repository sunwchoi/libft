/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:08:48 by sunwchoi          #+#    #+#             */
/*   Updated: 2023/07/23 17:55:08 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd_back(t_dlist **dlst, t_dlist *new)
{
	t_dlist	*temp;

	temp = *dlst;
	if (!temp)
		*dlst = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->pre = temp;
	}
}
