/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <ekindomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:39:55 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/17 12:15:52 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	char			*ptr;
	char			*ptr1;

	i = 0;
	ptr = (char *)s1;
	ptr1 = (char *)s2;
	while ((ptr[i] || ptr1[i]) && (i < n))
	{
		if (ptr[i] != ptr1[i])
			return ((unsigned char)ptr[i] - (unsigned char)ptr1[i]);
		i++;
	}
	return (0);
}
