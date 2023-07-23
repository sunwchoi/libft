/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:38:16 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/01 21:33:30 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	idx;
	char	*substr;

	idx = ft_strlen((char *)s);
	if (start > idx)
		idx = 0;
	if (idx > len)
		idx = len;
	substr = (char *)malloc(sizeof(char) * (idx + 1));
	if (!substr)
		return (NULL);
	substr[idx] = 0;
	while (idx--)
		substr[idx] = s[start + idx];
	return (substr);
}
