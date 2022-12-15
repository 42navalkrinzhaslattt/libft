char    *ft_strchr(const char *s, char c)
{
    while (*s != c)
    {
        if (*s == 0)
            return (s);
    }
    return (s);
}
