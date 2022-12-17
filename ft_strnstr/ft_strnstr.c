#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    unsigned int    i;
    unsigned int    counter;
    unsigned int    reach;

    if (!little)
        return ((char *)big);
    if (len < ft_strlen(little))
        reach = len;
    else
        reach = ft_strlen(little);
    i = 0;
    counter = 0;
    while (big[i])
    {
        if (big[i] == little[counter])
            counter++;
        else
            counter = 0;
        if (counter == reach)
            return ((char *)&big[i - counter + 1]);
        i++;
    }
    return (0);
}
