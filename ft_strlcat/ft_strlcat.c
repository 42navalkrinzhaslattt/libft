#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
  size_t dst_len;
  unsigned int i;

  dst_len = ft_strlen(dst);
  if (size <= dst_len)
    return (ft_strlen(src) + size);
  i = 0;
  while (src[i] && dst_len + i < size - 1)
  {
    dst[dst_len + i] = src[i];
    i++;
  }
  dst[dst_len + i] = 0;
  return (ft_strlen(src) + dst_len);
}
