/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:06:40 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/03/17 15:13:20 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*copy_s1;
	unsigned char	*copy_s2;

	if (!n)
		return (0);
	copy_s1 = (unsigned char *)s1;
	copy_s2 = (unsigned char *)s2;
	while (--n && (*copy_s1 == *copy_s2))
	{
		copy_s1++;
		copy_s2++;
	}
	return (*copy_s1 - *copy_s2);
}
