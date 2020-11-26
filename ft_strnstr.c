/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:40:48 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/26 01:33:57 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*galosha(char *hhaystack, char *nneedle, size_t len)
{
	size_t	i;
	size_t	j;

	while (len > 0 && *hhaystack != '\0')
	{
		i = 0;
		j = 0;
		while (hhaystack[i++] == nneedle[j] && len > 0)
		{
			j++;
			if (nneedle[j] == '\0')
				return (hhaystack);
			len--;
		}
		len = len - 1 + j;
		hhaystack++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hhaystack;
	char	*nneedle;

	nneedle = (char *)needle;
	hhaystack = (char *)haystack;
	if (*nneedle == 0)
		return (hhaystack);
	if (len == 0)
		return (NULL);
	return (galosha(hhaystack, nneedle, len));
}
