#include "libft.h"

int     ft_isdigit (char c)
{
    if ((c >= '0') && ( c<= '9'))
        return 1;
    else
        return 0;
}