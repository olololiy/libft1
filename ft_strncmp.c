/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:54:10 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/13 20:38:04 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *d;
	unsigned char *h;
	int a;
//	int b;
//	int c;
//	n = (unsigned char)n;

	d = (unsigned char*)s1;
	h = (unsigned char*)s2;

	while(n > 0/* && *d!='\0' && *h!='\0'*/)
	{
	//	b = (int)d;
	//	c = (int)h;

		if (*d != *h || *d =='\0' || *h =='\0')
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

