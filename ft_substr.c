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
	char	*re;
	size_t	i;
	if (!s)
		return (NULL);
	if(start >= ft_strlen(s))
		return ft_strdup("");
	if(len >  ft_strlen(s))
		len= ft_strlen(s);
	i=ft_strlen(s + start);
	if(i > len)
		i=len;
	re = malloc(i+1);
	if(!re)
		return NULL;
	ft_strlcpy(re,s+start,i+1);
	return re;
}
