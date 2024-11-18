/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 05:42:06 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/08 05:43:46 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_memchr(void *str, int c, size_t n)
{
	while (n--)
	{
		if (*((unsigned char *)str++) == (unsigned char)c)
			return ((void *)(--str));
	}
	return (NULL);
}
