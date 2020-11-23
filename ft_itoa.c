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

   b = 1;
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
    while(numb >= 1)//количество циферок
    {
        numb = numb/10;
        i++;
//	printf("%d", i);
    }
    anumb = malloc(sizeof(char)*(i + 1 ));
    //if
    numb = n;
    anumb[i+1] = '\0';
    while (i >= 0)
    {

	anumb[i] =(numb %  stepen(10, i-1) + '0');
      //  anumb[j] = (char*)(n/(stepen(10, i)));
    //  	printf("%c", anumb[i]);
	numb = numb / stepen(10, i - 1);
        i--;
//	printf("%d", i);
    }
//printf("%s", anumb);
    return (anumb);
}
int main()
{
    int a = 1000;
 //   ft_itoa(a);
   printf("%s", ft_itoa(a));
    return 0;
}

