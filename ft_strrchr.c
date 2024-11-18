/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:07:35 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/17 11:15:20 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_pos;

	last_pos = (0);
	while (*s)
	{
		if (*s == (unsigned char)c)
			last_pos = (char *)s;
		++s;
	}
	if (last_pos)
		return (last_pos);
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (0);
}
