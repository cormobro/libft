/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:16:07 by fbonaert          #+#    #+#             */
/*   Updated: 2020/10/28 16:48:46 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*t;
	size_t	i;

	if (!(t = (char *)malloc(count * size * sizeof(char))))
		return (0);
	i = 0;
	while (i < count * size)
	{
		t[i] = 0;
		i++;
	}
	return ((void *)t);
}
