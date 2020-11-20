/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:40:48 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/19 22:25:57 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const  char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t a;
	char *hhaystack;
	char *nneedle;
	nneedle=(char *)needle;
	hhaystack=(char *)haystack;

	a=0;
	i=0;
	j=0;
	if(*nneedle==0 || len==0)
		return hhaystack;
	while (*hhaystack != '\0' && len > 0)
	{
		while(hhaystack[i] == nneedle[j] && len > 0)
		{
			i++;
			j++;
			if (nneedle[j] == '\0')
				return hhaystack;
			len--;
		}
		len = len-1+j; 
		hhaystack++;
		i = 0;
		j = 0;	
	}
	return 0;
}
