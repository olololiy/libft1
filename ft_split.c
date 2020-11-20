/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:26:34 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/20 23:45:35 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_sumwords(char *s, char c)
{
	size_t sum;

	sum = 0;

	while (!s)
	{	
		while (*s == c)
			s++;
		while (*s != c)
			s++;
		sum++;
	}
	return (sum);
}

char	**ft_split(char const *s, char c)
{
	size_t sumwords;
	char **poolwords;
	//char **sumwords;
	if (!s || !c)
		return (NULL);
	sumwords = ft_sumwords(s, c);
	poolwords = (malloc(char *) * sumwords + 1);
	while 
	return (poolwords);
}
