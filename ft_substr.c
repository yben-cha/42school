/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 06:30:15 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/17 10:03:38 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	size_t	i;
	char	*subs;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start >= l)
		return (malloc(1));
	l = ft_strlen(s + start);
	if (l > len)
		l = len;
	subs = malloc((l + 1) * sizeof(char));
	if (subs == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
