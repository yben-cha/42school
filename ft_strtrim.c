/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:08:55 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/20 19:23:45 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_ocurr(char c, const char *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

static int	first_po(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!char_ocurr(s1[i], set))
			return (i);
		i++;
	}
	return (i);
}

static int	last_po(const char *s1, const char *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		if (!char_ocurr(s1[i], set))
			return (i);
		i--;
	}
	return (-1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		first_pos;
	int		last_pos;
	char	*m;
	int		i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	first_pos = first_po(s1, set);
	last_pos = last_po(s1, set);
	if (last_pos < first_pos)
		return (ft_strdup(""));
	m = malloc(last_pos - first_pos + 2);
	if (!m)
		return (NULL);
	i = 0;
	while (first_pos <= last_pos)
		m[i++] = s1[first_pos++];
	m[i] = '\0';
	return (m);
}
