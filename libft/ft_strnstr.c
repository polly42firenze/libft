 char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t a;
	size_t	b;

    a = 0;
	if (s2[a] == 0)
		return ((char *)s1);
	while (s1[a] && a < n)
	{
		b = 0;
		while (s1[a + b] == s2[b] && (a + b) < n)
		{
			if (s2[b+1] == '\0')
            {
                return ((char *)str + a)
            }
            b++;
        }
        a++;
	}
	return (NULL);
}