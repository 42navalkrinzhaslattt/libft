#include "libft.h"

size_t  ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    if (!dest || !src)
        return (0);
    if (size == 0)
        return (ft_strlen(src));
    i = 0;
    while (src[i] && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (ft_strlen(src));
}
