#include "libft.h"

char    *ft_strrchr(const char *s, char c)
{
    char *res;
    char *str;

    str = (char *)s;
    res = 0;
    while (*str)
    {
        if (*str == c)
            res = str;
        str++;
    }
    if (c == 0)
        return (str);
    return (res);
}
