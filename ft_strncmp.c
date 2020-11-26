/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:54:10 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/25 23:41:13 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char		*d;
	unsigned char		*h;
	int					a;

	d = (unsigned char*)s1;
	h = (unsigned char*)s2;
	while (n > 0)
	{
		if (*d != *h || *d == '\0' || *h == '\0')
		{
			a = (int)(*d - *h);
			return (a);
		}
		else
		{
			n--;
			d++;
			h++;
		}
	}
	return (0);
}
