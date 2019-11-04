/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:27:00 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/21 11:20:56 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int n, char c))
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (*s)
	{
		str[i] = f(i, *s);
		s++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
