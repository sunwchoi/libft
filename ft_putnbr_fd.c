/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:22:05 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/03/29 20:57:27 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;
	unsigned int	ua[10];
	unsigned int	*first_ua;
	unsigned int	*cpy_ua;

	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	un = (unsigned int)n;
	first_ua = ua;
	cpy_ua = first_ua;
	while (un)
	{
		*(cpy_ua++) = un % 10 + '0';
		un /= 10;
	}
	while (first_ua < cpy_ua--)
		write(fd, cpy_ua, 1);
}
