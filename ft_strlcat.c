/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:29:43 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/20 19:29:49 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;
	size_t	dest_length;

	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	dest_length = ft_strlen(dest);
	if (size <= dest_length)
		return (src_length + size);
	i = 0;
	while (src[i] != '\0' && (dest_length + i + 1) < size)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (src_length + dest_length);
}
