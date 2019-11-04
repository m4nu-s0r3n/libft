/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:52:18 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/10 17:46:01 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_len(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static unsigned int	ft_strnlen(char *str, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0' && size)
	{
		i++;
		size--;
	}
	return (i);
}

size_t				ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int i;
	unsigned int dstlen;

	i = 0;
	dstlen = ft_strnlen(dst, dstsize);
	if (!dstsize)
		return (ft_len((char *)src));
	if (dstsize == dstlen)
		return (ft_len((char *)src) + dstsize);
	while (src[i] != '\0' && (i < dstsize - dstlen - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + ft_len((char *)src));
}
