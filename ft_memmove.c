#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *tmp_dest;
    unsigned char   *tmp_src;

    tmp_dest = (unsigned char *)dest;
    tmp_src = (unsigned char *)src;
    if (tmp_dest < tmp_src)
    {
        while (n--)
        {
            *tmp_dest = *tmp_src;
            tmp_src++;
            tmp_dest++;
        }
    }
    else
    {
        while(n--)
        {
            tmp_dest[n] = tmp_src[n];
        }
    }
    return (dest);
}
