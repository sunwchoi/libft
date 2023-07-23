/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:30:33 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/03/17 16:26:07 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (0);
	while ((*s1 || *s2) && count + 1 < n)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		count++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
