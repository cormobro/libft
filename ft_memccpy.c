/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:18:37 by fbonaert          #+#    #+#             */
/*   Updated: 2020/11/03 12:27:52 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	*k;

	j = (unsigned char *)src;
	k = (unsigned char *)dest;
	i = 0;
	while (i < n && (unsigned char)j[i] != (unsigned char)c)
	{
		k[i] = j[i];
		i++;
	}
	if (i == n)
		return (NULL);
	k[i] = j[i];
	return (&k[i + 1]);
}
