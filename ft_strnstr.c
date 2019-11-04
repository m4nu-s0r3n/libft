/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:29:10 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/17 17:53:48 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_found(const char *s, size_t i, const char *f, size_t len)
{
	int				count;
	unsigned int	j;

	count = 0;
	j = 0;
	while (f[j] && (i + j) < len)
	{
		if (!(s[i + j] == f[j]))
			return (0);
		j++;
		count++;
	}
	if (count < ft_strlen(f))
		return (0);
	else
		return (1);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	int				found;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] != '\0' && (i < len))
	{
		if (haystack[i] == needle[0])
		{
			found = ft_found(haystack, i, needle, len);
			if (found == 1)
				return (char *)(&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
