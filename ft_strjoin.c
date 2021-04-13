/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:23:14 by fbonaert          #+#    #+#             */
/*   Updated: 2020/11/09 15:17:09 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		j_len(char const *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	if (!(res = (char *)malloc((j_len(s1) + j_len(s2) + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	if (s1)
		while (s1[i])
		{
			res[i] = s1[i];
			i++;
		}
	j = 0;
	if (s2)
		while (s2[j])
		{
			res[i + j] = s2[j];
			j++;
		}
	res[i + j] = '\0';
	return (res);
}
