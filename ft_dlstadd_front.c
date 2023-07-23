/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:09:41 by sunwchoi          #+#    #+#             */
/*   Updated: 2023/07/23 17:53:15 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd_front(t_dlist **dlst, t_dlist *new)
{
	new->next = *dlst;
	if (*dlst != NULL)
		(*dlst)->pre = new;
	*dlst = new;
}
