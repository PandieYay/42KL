char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = 0;
	while (s[len] != 0)
		len++;
	s = &s[len];
	while (*s != '0')
	{
		if (*s == (char) c)
		{
			return ((char *)s);
		}
		s--;
	}
	return (0);
}