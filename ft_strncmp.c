/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:24:41 by fbonaert          #+#    #+#             */
/*   Updated: 2020/11/03 12:50:04 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	int		first;
	int		second;

	if (n <= 0)
		return (0);
	len = 0;
	while (len < n - 1 && s1[len] && s2[len])
	{
		if (s1[len] != s2[len])
			return ((unsigned char)(s1[len]) - (unsigned char)(s2[len]));
		len++;
	}
	first = s1[len];
	second = s2[len];
	if (first < 0)
		first = -1 * first;
	if (second < 0)
		second = -1 * second;
	return (first - second);
}
