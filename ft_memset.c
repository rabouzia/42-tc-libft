#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char *start;
    
    if(b == NULL)
        return (NULL);
    start = b;
    while (len)
    {
        *start = c;
        start++;
        len--;
    }
    return (b);
}