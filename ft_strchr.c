/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <ekindomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:41:27 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/17 12:21:39 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (0);
}
