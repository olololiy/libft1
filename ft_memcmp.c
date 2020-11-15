/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:36:23 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/13 20:31:03 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *d;
	unsigned char *h;
	int a;

	n = (unsigned char)n;
	d = (unsigned char*)s1;
	h = (unsigned char*)s2;

	while(n > 0)
	{
		if (*d != *h)	
		{
			a = (int)(*d-*h);
			return a;
		}
		else{
			n--;
			d++;
			h++;
		}
		}
		return (0);	
}
