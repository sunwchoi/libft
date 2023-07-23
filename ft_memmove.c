/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:14:52 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/03/21 17:24:21 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*copy_dst;
	char	*copy_src;

	copy_dst = (char *)dst;
	copy_src = (char *)src;
	if (src < dst)
	{
		while (len--)
			copy_dst[len] = copy_src[len];
	}
	else if (src > dst)
	{
		i = 0;
		while (i < len)
		{
			copy_dst[i] = copy_src[i];
			i++;
		}
	}
	return (copy_dst);
}
