/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:24:10 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/20 19:24:40 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search_str)
{
	char	*st;

	if (!(search_str % 128))
		return ((char *)(str + ft_strlen(str)));
	st = (char *)(str + ft_strlen(str) - 1);
	while (st != (str - 1))
	{
		if (*(st--) == (char)search_str)
			return (++st);
	}
	return (NULL);
}
