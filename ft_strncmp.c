/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:24:41 by fbonaert          #+#    #+#             */
/*   Updated: 2020/10/26 10:24:43 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if ((!s1 && !s2) || n <= 0)
		return (0);
	else if (!s1)
		return (-s2[0]);
	else if (!s2)
		return (s1[0]);
	len = 0;
	while (len < n - 1 && s1[len] && s2[len])
	{
		if (s1[len] != s2[len])
			return ((unsigned char)(s1[len]) - (unsigned char)(s2[len]));
		len++;
	}
	return (abs(s1[len]) - abs(s2[len]));
}
