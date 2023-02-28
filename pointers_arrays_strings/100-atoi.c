
int _atoi(char *s) 
{
	int sign = 1;
	int num = 0;
	int i = 0;
	int dec = 1;
	while (s[i] != '\0')
	{

		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] == '+')
		{
			sign = 1;
		}
			while (s[i] >= '0' && s[i] <= '9')
			{
				num += (s[i] - '0') * dec;
				dec *= 10;
				i++;
			}
		i++;
	}
	return (sign * num);
}

