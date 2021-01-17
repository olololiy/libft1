/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 02:50:56 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/26 19:55:31 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		stepen(int d, int s)
{
	int b;

	b = 1;
	while (s > 0)
	{
		b = b * d;
		s--;
	}
	return (b);
}

static	int		countdigits1(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n > 0)
		n = n * (-1);
	while (n < 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void			ft_putnbr_fd(int n, int fd)
{
	int i;
	int num;
	int stepa;

	i = countdigits1(n);
	num = n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	else
		n = n * (-1);
	while (i != 0)
	{
		stepa = stepen(10, i - 1);
		num = n / stepa;
		ft_putchar_fd((num * (-1)) + '0', fd);
		n = n % stepa;
		i--;
	}
}
