/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <vfurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:26:34 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/26 19:40:24 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sumwords(char *s, char c)
{
	size_t	sum;
	int		y;

	sum = 0;
	y = 0;
	while (s[y] != '\0')
	{
		if (s[y] != c && (s[y + 1] == c || s[y + 1] == '\0'))
			sum++;
		y++;
	}
	return (sum);
}

void	ft_free(char **poolwords, int i)
{
	while (i >= 0)
		free(poolwords[i--]);
	free(poolwords);
	poolwords = NULL;
	return ;
}

void	mallocker2000(char *s, char c, char **poolwords, int i)
{
	int		y;
	int		start;
	size_t	len;

	y = 0;
	start = 0;
	while (s[y] != '\0')
	{
		if (y && s[y - 1] == c && s[y] != c)
			start = y;
		if (s[y] != c && (s[y + 1] == c || s[y + 1] == '\0'))
		{
			len = y - start + 1;
			poolwords[i] = ft_substr(s, start, len);
			if (poolwords[i] == 0)
			{
				ft_free(poolwords, i);
				return ;
			}
			i++;
		}
		y++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	sumwords;
	char	**poolwords;
	char	*s1;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	s1 = (char *)s;
	sumwords = ft_sumwords(s1, c);
	poolwords = (char **)malloc(sizeof(char *) * (sumwords + 1));
	if (poolwords == 0)
		return (0);
	poolwords[sumwords] = NULL;
	mallocker2000(s1, c, poolwords, i);
	return (poolwords);
}
