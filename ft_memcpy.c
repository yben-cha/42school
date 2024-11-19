/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:28:40 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/09 02:48:39 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if(!dst && !src)
		return NULL;
	const char	*sr;
	char	*ds;
	sr=src;
	ds=dst;
	while (n--)
		*(ds++) = *(sr++);
	return (dst);
}

