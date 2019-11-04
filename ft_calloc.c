/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:02:33 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/18 11:13:59 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (!(ptr = malloc(size * count)))
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
