/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <ekindomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:23:32 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/17 15:21:54 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*ptr;
	char			*ptr1;
	unsigned int	i;

	i = 0;
	ptr = dst;
	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	ptr1 = (char *)src;
	while (i < n)
	{
		ptr[i] = ptr1[i];
		i++;
	}
	return (ptr);
}
