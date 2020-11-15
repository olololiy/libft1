/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:04:14 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/13 20:33:29 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *g;
	g = (unsigned char*)s;
	c = (unsigned char)c;
	
	while(n > 0)
		{
			if (*g == c)
			{
				return(g);		
			}
				n--;
				g++;
		}
		return (0);
	
}
