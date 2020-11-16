/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:40:48 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/15 21:39:35 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr( char *haystack,  char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t a;

	a=0;
	i=0;
	j=0;
	if(*needle==0 || len==0)
		return haystack;
	while (*haystack != '\0' && len > 0)
	{
		while(haystack[i] == needle[j] && len > 0)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return haystack;
			len--;
		}
		len = len-1+j; 
		haystack++;
		i = 0;
		j = 0;	
	}
	return 0;
}
