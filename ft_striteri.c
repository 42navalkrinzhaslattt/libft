#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;
    char    *tmp;

    if (!s || !f)
        return ;
    i = 0;
    tmp = (char *)s;
    while (s[i])
    {
        tmp[i] = s[i];
        f(i, tmp); 
        s[i] = tmp[i];
        i++;
    }
}
