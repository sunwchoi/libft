/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:42:28 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/01 18:23:58 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*copy;

	copy = (char *)s;
	while (*copy)
		copy++;
	while (s <= copy && *copy != (char)c)
		copy--;
	if (s > copy)
		return (0);
	return (copy);
}
