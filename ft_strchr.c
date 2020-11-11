/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:06:40 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/11 21:13:36 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_strchr(const void *s, int c)
{
	unsigned char *g;
	unsigned char *u;
	g = (unsigned char*)s;
	c = (unsigned char)c;	

	while(*g!='\0')
	{
		if (*g == c)
		{
			u = g;
		}
		g++;
	}
	if (c == '\0')
		return (u);
	return (0);
}
