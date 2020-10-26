/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:20:33 by fbonaert          #+#    #+#             */
/*   Updated: 2020/10/26 10:20:41 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)ptr;
	i = 0;
	while (i < n)
	{
		tmp[i] = (unsigned char)x;
		i++;
	}
	return (ptr);
}
