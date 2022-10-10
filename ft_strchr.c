#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t  index;

    index = 0;
    while (s[index] != '\0')
    {
        if (s[index] == c)
            return ((char *) (s + index));
        index++;
    }
    if (s[index] == c)
        return ( (char *)(s + index));
    return (0);
}