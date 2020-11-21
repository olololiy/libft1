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
	    if ((s[y] != c && s[y + 1] == c) || s[y + 1] == '\0')
        {
	        sum++;
	        //y++;
        }
	        y++;
		/*while (*s == c && *s != '\0')
		{
			s++;
		}
		if (sum == 0 && *s == '\0')
				return 0;
		if

		while (*s != c && *s != '\0')
            s++;
        if (sum
        */
//		printf("%zu", sum);
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

	s1 = (char*)s;
	if (!s || !c)
		return (NULL);
	sumwords = ft_sumwords(s1, c);

	poolwords = malloc(sizeof(char *) * (sumwords + 1));
	if (poolwords == 0)
			return (0);
	y = 0;
	i = 0;
	start = 0;

    while (s[y] != '\0')
    {
        if (s[y] != c && (s[y + 1] == c || s[y + 1] == '\0'))
        {
            len = i - start;
            i++;
            y++;

            poolwords[i] = ft_substr(s1, 0, len);
            if (poolwords[i] == 0)
            {
                while (i >= 0)
                {
                    free(poolwords[i]);
                    i--;
                }
                free(poolwords);
            }
        }
        else if (s[y + 1] != c && y != 0)
        {
            start = y + 1;
            y++;
        }
        else
            y++;

//	printf("%d", 0);//delete
	/*while (s[i] != '\0')
	{
		len = 0;

		while (*s1 == c && *s1 != '\0')
			s1++;
	//	s2 = s1;
		while (*s1 != c && *s1 != '\0')
		{
			s1++;
			len++;
		}
		poolwords[i] = ft_substr(s1, 0, len);
		if (poolwords[i] == 0)
		{
			while (i >= 0)
			{
				free(poolwords[i]);
			i--;
			}
			free(poolwords);
	}
		i++;*/
		//s1 = s1 + len;
		//printf ("%d", i);
	}
	poolwords[i] = NULL;
//		printf("%d", 1);//delete
	return (poolwords); 
}
int main() {
    char a[] = "olol";
    char **b;
    b = ft_split(a, ' ');
     printf("%s", b[1]);
//	printf("%d", 2); //delete	
    return 0;
}
