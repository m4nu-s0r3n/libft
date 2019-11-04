/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <ekindomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:21:46 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/17 12:12:46 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*ptr;
	char			*ptr1;
	unsigned int	i;

	ptr = dst;
	ptr1 = (char *)src;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] == c)
		{
			ptr[i] = c;
			return (ptr + i + 1);
		}
		ptr[i] = ptr1[i];
		i++;
	}
	return (NULL);
}
