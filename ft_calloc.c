/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:46:58 by sunwchoi          #+#    #+#             */
/*   Updated: 2022/04/05 20:36:21 by sunwchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*arr;

	arr = malloc(number * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, number * size);
	return (arr);
}
