/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:40:32 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/05 17:01:50 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_size(char const *s, char c)
{
	int	size;

	size = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!(*s))
			break ;
		while (*s != c && *s)
			s++;
		size++;
	}				
	return (size);
}

static int	ft_setting(char **split, char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!(*s))
			break ;
		size = 0;
		while (*s != c && *s)
		{
			size++;
			s++;
		}
		split[i] = (char *)malloc(sizeof(char) * (size + 1));
		if (!split[i++])
			return (0);
	}	
	return (1);
}

static void	ft_copy(char **split, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!(*s))
			break ;
		j = 0;
		while (*s != c && *s)
			split[i][j++] = *(s++);
		split[i][j] = 0;
		i++;
	}
	split[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = (char **)malloc((ft_size(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	if (!ft_setting(split, s, c))
		return (NULL);
	ft_copy(split, s, c);
	return (split);
}
