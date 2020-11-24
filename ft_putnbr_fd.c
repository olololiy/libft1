/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 20:23:48 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/24 20:23:53 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int stepen(int d, int s)
{
    int b;
    b = 1;
    while (s > 0)
    {
        b = b * d;
        s--;
    }
    return b;
}

static int countdigits1(n)
{
    int i;

    i = 0;
    if (n > 0)
        n = n * (-1);
    while(n < 0)//количество циферок
    {
        n = n/10;
        i++;
    }
    return (i);
}


void ft_putnbr_fd(int n, int fd)
{
    int i;
    int num;

    i = countdigits1(n);
    num = n;
    int stepa;
    if (n < 0)
        ft_putchar_fd('-', fd);
    else
        n = n * (-1);
    while(i != 0)
    {
        stepa = stepen(10, i-1);
        num = n / stepa;
        ft_putchar_fd((num * (-1)) + '0', fd);
        n = n % stepa;
        i--;
    }
}
/*int main()
{
    int i = 3680733;
    ft_putnbr_fd(i, 1);
    return 0;
}*/