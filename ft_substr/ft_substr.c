#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *res;
    size_t  size;
    int     i;

    if (ft_strlen(s) <= start)
        size = 0;
    else
    {
        if (ft_strlen(s) - start > len)
            size = len;
        else
            size = ft_strlen(s) - start;
    }
    res = (char *)malloc((size + 1) * sizeof(char));
    if (!res)
        return (0);
    res[size] = 0;
    i = 0;
    while (i < size)
    {
        res[i] = s[i + start];
        i++;
    }
    return (res);
}
