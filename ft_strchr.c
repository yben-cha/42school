/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:26:03 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/20 19:28:19 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	if (!(search_str % 128))
		return ((char *)(str + ft_strlen(str)));
	while (*str)
	{
		if (*(str++) == (char)search_str)
			return ((char *)(--str));
	}
	return (NULL);
}
