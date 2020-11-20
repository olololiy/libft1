/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:56:41 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/19 22:52:26 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_strrchr(const void *s, int c)
{
	unsigned char *g;
	unsigned char *u;
	g = (unsigned char*)s;
	c = (unsigned char)c;
	u = 0;	

	while(*g!='\0')
	{
		if (*g == c)
			u = g;			
		g++;
	}
	if (c == '\0')
			u=g;	
	return (u);
}

