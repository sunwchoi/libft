/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:35:56 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/01 17:41:31 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*copy;

	copy = (unsigned char *)s;
	while (n)
	{
		if (*copy == (unsigned char)c)
			return (copy);
		n--;
		copy++;
	}
	return (NULL);
}
