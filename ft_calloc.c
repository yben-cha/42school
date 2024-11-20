/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:54:41 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/20 19:34:58 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;

	if (nitems != 0 && size > 18446744073709551615 / nitems)
		return (NULL);
	p = malloc(nitems * size);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, nitems * size);
	return (p);
}
