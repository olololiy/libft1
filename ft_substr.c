/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 23:00:42 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/26 00:33:03 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*b;
	size_t	alen;
	char	*ss;

	ss = (char*)s;
	if (!s)
		return (0);
	alen = ft_strlen(ss + start);
	if (start >= ft_strlen(ss))
	{
		b = malloc(sizeof(char) * 1);
		if (b == 0)
			return (0);
		*b = 0;
		return (b);
	}
	if (len > alen)
		len = alen;
	b = malloc(sizeof(char) * (len + 1));
	if (b == 0)
		return (0);
	ft_strlcpy(b, s + start, len + 1);
	b[len] = '\0';
	return (b);
}
