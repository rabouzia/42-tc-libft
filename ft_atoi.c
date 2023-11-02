#include "libft.h"

 int ft_atoi(char *str)
{
    int p;
    int n;
    n = 0;
    p = 0;
    while ((*str >= 9 || *str <= 13) && *str == 32)
        str++;
    while (*str == '-' || *str == '+')
    {   
        if (*str == '-')
            p++;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        n *= 10;
        n += *str - '0';
        str++;         
    }
    if (!(p % 2 == 0))
        return -n;
    return n;
}