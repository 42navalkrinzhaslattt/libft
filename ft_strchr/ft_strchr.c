#include "libft.h"

char    *ft_strchr(const char *s, char c)
{
    char *str;

    str = (char *)s;
    while (*str != c)
    {
        if (*str == 0)
            return (0);
        str++;
    }
    return (str);
}
