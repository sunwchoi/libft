/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:56:19 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/01 20:44:30 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	ui;
	char			*ret;

	ui = 0;
	while (s[ui])
		ui++;
	ret = (char *)malloc((ui + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	ret[ui] = 0;
	ui = 0;
	while (s[ui])
	{
		ret[ui] = f(ui, s[ui]);
		ui++;
	}
	return (ret);
}
