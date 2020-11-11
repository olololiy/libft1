/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:56:41 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/11 21:10:28 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_strrchr(const void *s, int c)
{
	unsigned char *g;
	g = (unsigned char*)s;
	c = (unsigned char)c;	

	while(*g!='\0')
	{
		if (*g == c)
		{
			return(g);

		}
		g++;
	}
	if (c == '\0')
		return (g);
	return (0);
}
