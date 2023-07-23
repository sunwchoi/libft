/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:33:09 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/01 22:17:34 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	src_len;

	count = 0;
	src_len = 0;
	while (dst[count])
	{
		count++;
		if (count > dstsize)
		{
			while (src[src_len])
				src_len++;
			return (src_len + dstsize);
		}
	}
	while (*src && count + 1 < dstsize)
		dst[count++] = *src++;
	dst[count] = '\0';
	while (*src++)
		count++;
	return (count);
}
