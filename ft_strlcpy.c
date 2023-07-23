/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:24:01 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/01 22:18:36 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;

	count = 0;
	while (src[count] && (count + 1 < dstsize))
	{
		dst[count] = src[count];
		count++;
	}
	if (dstsize)
		dst[count] = '\0';
	count = 0;
	while (src[count])
		count++;
	return (count);
}
