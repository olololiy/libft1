#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))	
{
	char *result;
	unsigned int i;
	i = 0;
	// guard of empty line
	len = ft_strlen(s);
	result = malloc(sizeof(char * (len + 1)));
	if (!result)
		return 0;// замолочь
	while(len!=0)
	{
		result[i] = f(i, s[i]);
		i++;
		len--;	
	}
	result[i] = '\0';
	return (result);
}
