#include "libft.h"

int ft_atoi(const char *nptr)
{
    int res;
    int i;
    int sign;

    res = 0;
    i = 0;
    sign = 1;
    while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
        i++;
    if (nptr[i] == '-')
        sign = -1;
    if (nptr[i] == '-' || nptr[i] == '+')
        i++;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        res = res * 10 + (nptr[i] - 48);
        i++;
    }
    return (res * sign);
}
