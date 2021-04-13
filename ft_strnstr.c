/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:24:56 by fbonaert          #+#    #+#             */
/*   Updated: 2020/11/03 13:08:19 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(substr))
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (substr[j] && str[i + j] && substr[j] == str[i + j]
				&& (i + j) < len)
			j++;
		if (!substr[j])
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
