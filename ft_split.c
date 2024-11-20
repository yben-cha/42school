/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:25:41 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/20 19:27:02 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	if (s[0] != c)
		count++;
	if (s[0] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static void	free_in_cases(char **resu, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(resu[j]);
		resu[j] = NULL;
		j++;
	}
	free(resu);
	resu = NULL;
}

static char	**malloc_words(char **resu, char const *s, char c)
{
	int	i;
	int	count;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		count = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			count++;
			i++;
		}
		resu[k] = malloc((count + 1) * sizeof(char));
		if (!resu[k])
		{
			free_in_cases(resu, k);
			return (NULL);
		}
		k++;
	}
	return (resu);
}

static void	fill_words(char **resu, char const *s, char c)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			resu[k][j++] = s[i++];
		resu[k][j] = '\0';
		k++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**resu;

	if (!s)
		return (NULL);
	resu = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!resu)
		return (NULL);
	if (!ft_strlen(s))
	{
		resu[0] = NULL;
		return (resu);
	}
	if (!malloc_words(resu, s, c))
		return (NULL);
	fill_words(resu, s, c);
	resu[count_words(s, c)] = NULL;
	return (resu);
}
