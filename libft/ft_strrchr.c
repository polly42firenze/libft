char	*ft_strrchr(const char *s, int c)
{
	char	*s2;

	lst = 0;
	while (*s)
	{
		if (*s == (char)c)
			s2 = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (s2);
}