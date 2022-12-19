#include "libft.h"

static unsigned int ft_getpower(int n)
{
    unsigned long   power;

    if (n == 0)
      return (1);
    power = 0;
    if (n < 0)
        {
            n *= -1;
            power++;
        }
    while (n)
    {
        n /= 10;
        power++;
    }
    return (power);
}

char *ft_itoa(int n)
{
    char    *res;
    unsigned int    power;
    int    i;
    unsigned int nb;

    power = ft_getpower(n);
    res = (char *)malloc((power + 1) * sizeof(char));
    ft_bzero(res, power + 1);
    nb = n;
    if (n < 0)
    {
        nb *= -1;
        res[0] = '-';
    }
    i = power - 1;
    while (i >= 0 && res[i] != '-')
    {
        res[i] = nb % 10 + 48;
        nb /= 10;
        i--;
    }
    return (res);
}
