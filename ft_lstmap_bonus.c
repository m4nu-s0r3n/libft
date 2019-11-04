/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:46:33 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/18 14:28:38 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void *))
{
	t_list *mapi;

	if (!lst || !f)
		return (NULL);
	if (!(mapi = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&mapi, del);
		return (NULL);
	}
	mapi->next = ft_lstmap(lst->next, f, del);
	return (mapi);
}
