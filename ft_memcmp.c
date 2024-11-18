/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 04:46:45 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/08 05:22:30 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *str1, const void *str2, int n)
{
	while (n--)
	{
		if (*((unsigned char *)str1++) != *((unsigned char *)str2++))
			return (*((unsigned char *)(--str1))
				- *((unsigned char *)(--str2)));
	}
	return (0);
}
