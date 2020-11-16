/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 22:23:37 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/16 20:50:07 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_atoi(const char *str)
{
	const char *s;
	int neg;
	int result;
	int i;
	result= 0;
	i = 0;
	neg	= 1;
	s = str;
	//	skip space
	while ((*s >= 9 && *s <= 13) || *s == ' ')
		s++;
	if (!s)
		return 0;
	if (*s=='-')
	{
		neg = -1;
		s++;
	}
	else if (*s=='+')
		s++;
	//	skip '0';
	while (*s=='0')
		s++;
	while(ft_isdigit((int)*s))
	{
		result=result * (i*10)+ (*s - '0' );
		s++;
		i=i*10;
	}
	return (result * neg);
}
