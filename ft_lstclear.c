/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:14:35 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/18 12:14:51 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curent;

	if (lst && del)
	{
		while (*lst)
		{
			curent = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = curent;
		}
	}
}
