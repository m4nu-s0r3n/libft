/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:46:22 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/17 15:47:41 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	int		n;
	char	temp;

	len = ft_strlen(str);
	if (str[0] == '-')
	{
		n = (len + 1) / 2;
		i = 1;
	}
	else
	{
		n = len / 2;
		i = 0;
	}
	while (i < n)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		i++;
		len--;
	}
	return (str);
}

static char	*ft_neg_num(int nbr)
{
	char	*tab;
	int		i;

	if (!(tab = (char *)malloc(sizeof(char) * 12)))
		return (NULL);
	tab[0] = '-';
	nbr *= -1;
	i = 1;
	while (nbr != 0)
	{
		tab[i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	tab[i] = '\0';
	return (ft_strrev(tab));
}

static char	*ft_pos_num(int nbr)
{
	char	*tab;
	int		i;

	if (!(tab = (char *)malloc(sizeof(char) * 13)))
		return (NULL);
	i = 0;
	if (nbr == 0)
	{
		tab[0] = '0';
		tab[1] = '\0';
		return (tab);
	}
	while (nbr != 0)
	{
		tab[i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	tab[i] = '\0';
	return (ft_strrev(tab));
}

static char	*ft_min_value(void)
{
	char *tab;

	if (!(tab = (char *)malloc(sizeof(char) * 12)))
		return (NULL);
	tab[0] = '-';
	tab[1] = '2';
	tab[2] = '1';
	tab[3] = '4';
	tab[4] = '7';
	tab[5] = '4';
	tab[6] = '8';
	tab[7] = '3';
	tab[8] = '6';
	tab[9] = '4';
	tab[10] = '8';
	tab[11] = '\0';
	return (tab);
}

char		*ft_itoa(int nbr)
{
	int min_value;

	min_value = -2147483648;
	if (nbr == min_value)
		return (ft_min_value());
	if (nbr < 0 && nbr != min_value)
		return (ft_neg_num(nbr));
	return (ft_pos_num(nbr));
}
