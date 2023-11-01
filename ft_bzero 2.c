void    *ft_bzero(void *s, size_t n)
{
    char *str;

    str = s;
    while(n)
    {
        *str = '0';
        str++;
        n--;
    }
    return s;
}