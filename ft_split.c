/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <vfurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:26:34 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/21 20:30:36 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_sumwords(char *s, char c)
{
	size_t sum;

	sum = 0;
    int y = 0;
	while (s[y] != '\0')
	{
	    if ((s[y] != c &&( s[y + 1] == c || s[y + 1] == '\0')))
        {
	        sum++;
        }
	        y++;
	}
	return (sum);
}

char	**ft_split(char const *s, char c)
{
    size_t sumwords;
    char **poolwords;
    char *s1;
//	char *s2;
    size_t len;
    int start;

    int y;
    int i;

    s1 = (char *) s;
    if (!s || !c)
        return (NULL);
    sumwords = ft_sumwords(s1, c);

    poolwords = malloc(sizeof(char *) * (sumwords + 1));
    if (poolwords == 0)
    {
        free(poolwords);
        return (0);
    }
    y = 0;
    i = 0;
    start = 0;

    while (s[y] != '\0') {
        if (s[y - 1] == c && s[y] != c) {
            start = y;
        }
        if (s[y] != c && (s[y + 1] == c || s[y + 1] == '\0'))
        {
            len = y + 1 - start;
            poolwords[i] = ft_substr(s1, start, len);
            if (poolwords[i] == 0) {
                while (i >= 0) {
                    free(poolwords[i]);
                    i--;
                }
                free(poolwords);
            }
            i++;
        }
            y++;

    }
    poolwords[i] = NULL;
    return (poolwords);
}


int main()
{
	char **a;
	a = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');

}