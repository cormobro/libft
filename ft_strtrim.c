/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:25:30 by fbonaert          #+#    #+#             */
/*   Updated: 2020/10/26 10:25:32 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_in_set(char const *set, char c)
{
	int	i;

	if (!set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	if (!s1)
		return (0);
	i = 0;
	while (is_in_set(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= 0 && is_in_set(set, s1[j]))
		j--;
	k = (j >= i) ? j - i + 2 : 1;
	if (!(res = (char *)malloc(k * sizeof(char))))
		return (0);
	k = 0;
	while (s1[i + k] && i + k < j + 1)
	{
		res[k] = s1[i + k];
		k++;
	}
	res[k] = '\0';
	return (res);
}
