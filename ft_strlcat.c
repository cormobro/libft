/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:23:31 by fbonaert          #+#    #+#             */
/*   Updated: 2020/10/26 10:23:33 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		len;

	if (!dest || !src)
		return (ft_strlen(dest) + ft_strlen(src));
	len = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	if ((int)size < 0)
		size = len + ft_strlen(src) + 1;
	i = 0;
	while (len + i < size - 1 && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	size = ((int)size > len) ? (size_t)len : size;
	return (size + ft_strlen(src));
}
