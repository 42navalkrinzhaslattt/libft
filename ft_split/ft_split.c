#include "libft.h"

static int is_sep(char c, char sep)
{
    if (c == sep)
        return (1);
    return (0);
}

static int arr_size(const char *str, char sep)
{
 int counter;
 int i;

 counter = 0;
 i = 0;
 while (str[i])
 {
  if (is_sep(str[i], sep) == 0
   && (is_sep(str[i - 1], sep) == 1 || i == 0))
   counter++;
  i++;
 }
 return (counter);
}

static int str_size(const char *str, char sep, int n)
{
 int counter;
 int i;
 int length;

 counter = -1;
 i = 0;
 length = 0;
 while (str[i])
 {
  if (is_sep(str[i], sep) == 0
   && (is_sep(str[i - 1], sep) == 1 || i == 0))
   counter++;
  if (counter == n && is_sep(str[i], sep) == 0)
   length++;
  i++;
 }
 return (length);
}

static char *str_save(const char *str, char sep, int n)
{
 char *temp;
 int  counter;
 int  i;
 int  j;

 counter = -1;
 i = 0;
 j = 0;
 temp = (char *)malloc((str_size(str, sep, n) + 1) * sizeof(char));
 temp[str_size(str, sep, n)] = 0;
 while (str[i])
 {
  if (is_sep(str[i], sep) == 0
   && (is_sep(str[i - 1], sep) == 1 || i == 0))
   counter++;
  if (counter == n && is_sep(str[i], sep) == 0)
  {
   temp[j] = str[i];
   j++;
  }
  i++;
 }
 return (temp);
}

char **ft_split(char const *s, char c)
{
 char **array;
 int  i;
 int  counter;

 array = (char **)malloc((arr_size(s, c) + 1) * sizeof(char *));
 if (!array)
    return (NULL);
 array[arr_size(s, c)] = 0;
 counter = -1;
 i = 0;
 while (i < arr_size(s, c))
 {
  array[i] = str_save(s, c, i);
  if (!array[i])
    return (NULL);
  i++;
 }
 return (array);
}
