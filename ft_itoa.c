/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:39:27 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/22 18:46:05 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



int stepen(int d, int s)
{
   int b;

   b = 0;
    while(s > 0)
    {
        b = b * d;
        s--;
    }
    return b;
}

char *ft_itoa(int n)
{
    int numb;
    int i;
    char *anumb;

    numb = n;
    i = 0;
    while(numb > 1)
    {
        numb = numb/10;
        i++;
    }
    anumb = malloc(sizeof(char)*(i + 3));
    //if
    numb = n;
    while (i >= 0)
    {
        anumb[i] = (char*)(n/(stepen(10, i)));
        i--;
    }
    return (anumb);
}
int main()
{
    int a = 156;
    printf("%s", ft_itoa(a));
    return 0;
}

