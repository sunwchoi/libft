/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:25:29 by sunwchoi          #+#    #+#             */
/*   Updated: 2023/01/12 16:18:37 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	plusminus;
	int	n;

	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	plusminus = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			plusminus *= -1;
		str++;
	}
	n = 0;
	while ('0' <= *str && *str <= '9')
	{
		n = n * 10 + (*(str++) - '0');
	}
	n *= plusminus;
	return (n);
}

