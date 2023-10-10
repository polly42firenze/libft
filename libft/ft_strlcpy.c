uninsigned int ft_strlcpy ( char *dest, char *str, uninsigned int size)
{
    uninsigned int i;
    uninsigned int res;
    i = 0;
    res = 0;
    while (src[dest])
    res++;
if (size<1)
retun (res);
while (src[i] && i<size-1)
{
    dest[i]= src[i];
    i++;
}
dest [i]='\0';
resturn (res);
}