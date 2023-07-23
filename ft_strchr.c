/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:01:41 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/01 18:22:23 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*copy;

	copy = (char *)s;
	while (*copy && *copy != (char)c)
		copy++;
	if (!(*copy) && c)
		return (0);
	return (copy);
}
