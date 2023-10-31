#include "libft.h"

void bzero(void *s, size_t n)
{
    char *zeroed;
    size_t  i;
    
    zeroed = s;
    i = 0;
    while(i++ < n)
        *zeroed++ = 0;
}