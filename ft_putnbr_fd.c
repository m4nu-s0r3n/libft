/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekindomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:45:30 by ekindomb          #+#    #+#             */
/*   Updated: 2019/10/21 11:38:45 by ekindomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (!fd)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if ((n < 0) && (n != -2147483648))
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n <= 9)
		ft_putchar_fd(n + 48, fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
