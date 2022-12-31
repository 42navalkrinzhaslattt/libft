#include "libft.h"

void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    unsigned char   *tmp_dest;
    unsigned char   *tmp_src;

    tmp_dest = (unsigned char *)dest;
    tmp_src = (unsigned char *)src;
    while (n--)
    {
        *tmp_dest = *tmp_src;
        tmp_dest++;
        tmp_src++;
    }
    return (dest);
}
