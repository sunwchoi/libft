/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:42:29 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/05 17:52:49 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_size(unsigned int un)
{
	int	size;

	size = 0;
	if (!un)
		return (1);
	while (un)
	{
		un /= 10;
		size++;
	}
	return (size);
}

static void	ft_convert(char *a_last, unsigned int un)
{
	*a_last = 0;
	if (!un)
		*(--a_last) = '0';
	while (un)
	{
		*(--a_last) = un % 10 + '0';
		un /= 10;
	}
}

char	*ft_itoa(int n)
{
	char			*a;
	unsigned int	un;
	int				size;

	un = (unsigned int)n;
	if (n < 0)
	{
		un = n * -1;
		size = ft_size(un) + 1;
	}
	else
		size = ft_size(un);
	a = (char *)malloc((size + 1) * sizeof(char));
	if (!a)
		return (NULL);
	ft_convert(a + size, un);
	if (n < 0)
		a[0] = '-';
	return (a);
}
