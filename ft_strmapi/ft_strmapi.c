#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char    *tmp;

    if (!s || !f)
        return (0);
    tmp = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!tmp)
        return (0);
    i = 0;
    while (s[i])
    {
        tmp[i] = f(i, s[i]);
        i++;
    }
    return (tmp);
}
