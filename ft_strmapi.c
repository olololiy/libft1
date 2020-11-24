#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *result;
	unsigned int i;
	int len;
	i = 0;
	if (!s || !f)
	    return 0;
	len = ft_strlen(s) + 1;
	if(!(result = malloc(sizeof(char) * (len))))
        return 0;
    while(len != 1)
	{
		result[i] = (*f)(i, s[i]);
		i++;
		len--;	
	}
	result[i] = '\0';
	return (result);
}

/*int main()
{
    int a = 0;
 char *b = ft_itoa(a);
   printf("%s", b);
    return 0;
}*/

