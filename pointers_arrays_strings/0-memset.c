char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	int j = 0;
	while (i != n)
	{
		for (; s[j]; j++)
		{
			s[j] = b;
		}
	}
	return (s);
}
