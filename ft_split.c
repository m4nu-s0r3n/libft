/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <ekindomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:25:25 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/21 11:15:46 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_match(const char c, char c1)
{
	if (c == c1)
		return (1);
	return (0);
}

static void		ft_my_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char			**ft_split(const char *str, char c)
{
	char	**tab;
	int		j;
	int		idx;

	idx = 0;
	if (!str || !(tab = (char **)malloc(sizeof(char*) * 255)))
		return (NULL);
	while (*str && ft_match(*str, c) == 1)
		str++;
	while (*str)
	{
		j = 0;
		if (!(tab[idx] = (char *)malloc(sizeof(char) * 2048)))
		{
			ft_my_free(tab);
			return (NULL);
		}
		while (*str && (ft_match(*str, c) == 0))
			tab[idx][j++] = *(str++);
		while (*str && (ft_match(*str, c) == 1))
			str++;
		tab[idx++][j] = '\0';
	}
	tab[idx] = NULL;
	return (tab);
}
