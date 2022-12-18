#ifndef LIBFT.H
# define LIBFT.H
# include <unistd.h>
# include <stdlib.h>

//int     ft_isprint(char c);
int     ft_atoi(const char *nptr);
int     ft_isalnum(char c);
int     ft_isalpha(char c);
int     ft_isascii(char c);
int     ft_isdigit(char c);
int     ft_tolower(int c);
int     ft_toupper(int c);
char    *ft_strchr(const char *s, char c);
char    *ft_strrchr(const char *s, char c);
void    *ft_memset(void *s, int c, size_t n);
size_t  ft_strlen(char *str);
int     ft_strncmp(const char *str1, const char *str2, size_t n);
size_t  ft_strlcpy(char *dest, char *src, unsigned int size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char    *ft_strdup(const char *s);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);

#endif