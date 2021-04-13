/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:19:07 by fbonaert          #+#    #+#             */
/*   Updated: 2020/11/03 12:41:03 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cmpab(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (n <= 0 && s1 && s2)
		return (0);
	else if (!a && s1 && s2)
		return (-b[0]);
	else if (!b && s1 && s2)
		return (a[0]);
	i = 0;
	while (i < n - 1)
	{
		if (a[i] != b[i] && s1 && s2)
			return (cmpab(a[i]) - cmpab(b[i]));
		i++;
	}
	if (s1 && s2)
		return (cmpab(a[i]) - cmpab(b[i]));
	return (0);
}
