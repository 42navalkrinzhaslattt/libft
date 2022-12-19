#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *res;
    unsigned int    i;
    unsigned int    reach;
    unsigned int    size;

    size = ft_strlen(s1) + ft_strlen(s2) + 1;
    res = (char *)malloc((size) * sizeof(char));
    if (!res)
        return(NULL);
    res[size - 1] = 0;
    i = 0;
    reach = ft_strlen(s1);
    while (i < size - 1)
    {
        if (i < reach)
            res[i] = s1[i];
        else
            res[i] = s2[i - reach];
        i++;
    }
    return (res);
}
