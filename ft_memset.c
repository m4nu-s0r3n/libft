/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <ekindomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:33:20 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/17 12:12:51 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = b;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	b = ptr;
	return (b);
}
