#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *str;
    int length;
    int i;

    length = ft_strlen(s);
    str = (char *)malloc((length + 1) * sizeof(char));
    str[length] = 0;
    i = 0;
    while(s[i])
    {
        str[i] = s[i];
        i++;
    }
    return (str);
}
