#include "libft.h"

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *tmp1;
    unsigned char   *tmp2;

    tmp1 = (unsigned char)s1;
    tmp2 = (unsigned char)s2;
    while (n--)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (0);
}
