char	*ft_strdup(char *src)
{
	int		i;
	char	*result;

	i = 0;
	while (src[i])
		i++;
	result = malloc(sizeof(char) * i + 1);
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	return (result);
}