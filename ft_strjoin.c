/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:19:03 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/01 15:19:29 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		len1;
	int		len2;

	len1 = 0;
	len2 = 0;
	while (*s1)
	{
		s1++;
		len1++;
	}
	while (*s2)
	{
		s2++;
		len2++;
	}
	strjoin = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!strjoin)
		return (NULL);
	strjoin[len1 + len2] = 0;
	while (len2--)
		strjoin[len1 + len2] = *(--s2);
	while (len1--)
		strjoin[len1] = *(--s1);
	return (strjoin);
}
