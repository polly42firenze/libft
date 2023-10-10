int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    if (!n)
    return (0);
i=0;
while (s1[i] != '\0' && s2[i] != '\0' && s1[i])
i++;
if (i < n)
{
    return (s[i] - s2[i]);
}
else
{
    return (0);
}
}