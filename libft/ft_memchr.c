void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *str;
    i=0;
    str=(char *)s;
    while (i<n)
    {
        if ((unsigned char)str[i]==(uninsigned char)c)
        return(str+i);
    }
    return (NULL);
}