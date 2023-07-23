/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:19:39 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/01 20:38:12 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;

	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len)
	{
		idx = 0;
		while (haystack[idx] == needle[idx])
		{
			if (!needle[idx + 1])
				return ((char *)haystack);
			if (len == idx + 1)
				return (NULL);
			idx++;
		}
		haystack++;
		len--;
	}
	return (NULL);
}
