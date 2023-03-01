/**
 * _strchr - locates a character in a string
 * @c: the character
 * @s: the string
 * Return: the char n the string s 0 else
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
