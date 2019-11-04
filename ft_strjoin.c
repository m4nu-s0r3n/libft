/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <ekindomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:31:14 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/21 10:08:47 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	size;
	int		i;

	i = -1;
	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (*s1)
		str[++i] = *(s1++);
	while (*s2)
		str[++i] = *(s2++);
	str[++i] = '\0';
	return (str);
}
