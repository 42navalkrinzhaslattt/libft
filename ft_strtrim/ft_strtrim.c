#include "libft.h"

static int  ft_isset(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

static size_t   ft_getsize(char const *s1, char const *set)
{
    int     i;
    size_t  length;

    i = 0;
    length = 1;
    while (s1[i])
        {
            if (!ft_isset(s1[i], set))
                length++;
            i++;
        }
    return (length);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char    *res;
    size_t  res_size;
    unsigned int i;

    res_size = ft_getsize(s1, set);
    i = 0;
    res = (char *)malloc(res_size * sizeof(char));
    if (!res)
        return (NULL);
    res[res_size - 1] = 0;
    i = 0;
    while (s1[i])
    {
        if (!ft_isset(s1[i], set))
        {
            *res = s1[i];
            res++;
        }
        i++;
    }
    res = res - res_size + 1;
    return (res);
}
