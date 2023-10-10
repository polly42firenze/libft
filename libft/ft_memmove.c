void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src2;
	char	*dest2;
	size_t	i;

	src2 = (char *)src;
	dest2 = (char *)dest;
	i = 0;
	if (dest2 > src2)
		while (n-- > 0)
			dest2[n] = src2[n];
	else
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	return (dest);
}