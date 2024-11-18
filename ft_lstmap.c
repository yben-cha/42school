/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:35:43 by yben-cha          #+#    #+#             */
/*   Updated: 2024/11/18 13:42:27 by yben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static t_list	*create_new_node(void *content, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	tmp->content = f(content);
	if (!tmp->content)
	{
		free(tmp);
		return (NULL);
	}
	tmp->next = NULL;
	return (tmp);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_new;
	t_list	*tmp;

	head_new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		tmp = create_new_node(lst->content, f, del);
		if (!tmp)
		{
			ft_lstclear(&head_new, del);
			return (NULL);
		}
		if (!head_new)
			head_new = tmp;
		else
			ft_lstadd_back(&head_new, tmp);
		lst = lst->next;
	}
	return (head_new);
}
