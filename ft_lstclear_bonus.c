/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:45:34 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/16 11:44:17 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clear;
	t_list	*tmp;
	int		size;
	int		count;

	if (!lst || !*lst || !del)
		return ;
	size = ft_lstsize(*lst);
	while (size-- > 0)
	{
		count = 0;
		clear = *lst;
		while (clear && count < size)
		{
			tmp = clear;
			clear = tmp->next;
			count++;
		}
		del(clear->content);
		free(clear);
	}
	*lst = NULL;
}
