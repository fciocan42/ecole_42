/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 13:50:51 by fciocan           #+#    #+#             */
/*   Updated: 2018/06/12 17:02:57 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		ct;
	int		a[15];
	long	nb2;

	nb2 = n;
	ct = 0;
	if (nb2 < 0)
	{
		ft_putchar('-');
		nb2 = nb2 * (-1);
	}
	while (nb2 > 9)
	{
		a[ct++] = nb2 % 10;
		nb2 = nb2 / 10;
	}
	a[ct] = nb2;
	while (ct >= 0)
	{
		ft_putchar(a[ct] + '0');
		ct--;
	}
}
