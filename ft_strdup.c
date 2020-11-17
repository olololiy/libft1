/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 21:51:28 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/17 22:59:51 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	size_t size;
	char *dst;
	char *src;
	src = (char*)s1;

	size = ft_strlen(src);
	printf("%zu", size);
	dst = malloc(sizeof(char)*(size+1));
	if (*s1=='\0')
	{
		*dst='\0';
		return dst;
	}
	if (size==0 || !src || !dst)
		return 0;
	ft_strlcpy(dst, s1, size+1);
	return dst;
}
