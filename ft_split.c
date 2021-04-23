#include "libft.h"

static int	wordscounter(char const *s, char c)
{
	int i;
	int counter;

	i = 0;
	counter = 1;
	while (s[i] == c)
		i++;
	if (s[i] && s[i] != c)
		counter ++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			counter++;
		i++;
	}
	return (counter);
}

static char *filler(char const *s, int i, int j)
{
	int len;
	char *word;
	int k;

	len = i - j + 1;
	if ((i != 0) && (j != 0))
		word = (char *)malloc((len + 1) * sizeof(char));
	else
		word = (char *)malloc(len * sizeof(char));
	if (!word)
		return (0);
	k = 0;
	while(k < len && len > 1)
	{
		word[k] = s[j];
		k++;
		j++;
	}
	word[k] = '\0';
	return (word);
}

static char **split_free(char **tab, int k)
{
	while (k >= 0)
	{
		free(tab[k]);
		k--;
	}
	free(tab);
	return (NULL);
}

static char **cutter(char const *s, char c, char **res)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		j = i;
		while(s[i] != c && s[i])
		{
			i++;
		}
		if (j != i)
		{
			res[k] = filler(s, i - 1, j);
			if (!res[k])
				return (split_free(res, k));
			k++;
		}
		i++;
	}
	return (res);
}

char **ft_split(char const *s, char c)
{
	int i;
	char **res;

	if (!s)
		return (NULL);
	res = (char **)malloc(wordscounter(s, c) * sizeof(char *));
	if (!res)
		return (NULL);
	if (wordscounter(s, c) > 1)
	{
		res = cutter(s, c, res);
		res[wordscounter(s, c) - 1] = filler(s, 0, 0);
	}
	else
	{
		res[0] = (char *)malloc(1 * sizeof(char));
		if (!res[0])
			return (split_free(res, 0));
		res[0][0] = '\0';
	}
	if (!res)
		return (NULL);
	return (res);
}
