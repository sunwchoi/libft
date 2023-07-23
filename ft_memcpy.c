/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:21:39 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/05 20:41:50 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*copy_dst;
	char	*copy_src;

	if (!dst && !src)
		return (NULL);
	copy_dst = (char *)dst;
	copy_src = (char *)src;
	while (n--)
		copy_dst[n] = copy_src[n];
	return (copy_dst);
}
