/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:20:30 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/07 12:09:51 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	is_setchar(char c, char const *set)
{
	while ((*set != c) && *set)
		set++;
	if (!(*set))
		return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		first;
	int		last;
	int		index;

	first = 0;
	while (s1[first] && is_setchar(s1[first], set))
		first++;
	last = first;
	while (s1[last])
		last++;
	last--;
	while ((s1[last] && is_setchar(s1[last], set)) && last >= first)
		last--;
	if (last >= first)
		ret = (char *)malloc((last - first + 2) * sizeof(char));
	else
		ret = (char *)malloc(sizeof(char));
	if (!ret)
		return (NULL);
	index = 0;
	while (first <= last)
		ret[index++] = s1[first++];
	ret[index] = 0;
	return (ret);
}
