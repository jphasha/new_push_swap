#include "push_swap.h"

static int		ft_count_chr(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int		ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == c || s[i] == 10) && s[i] != '\0')
		{
			i++;
		}
		if (s[i] != c && s[i] != 10 && s[i] != '\0')
		{
			j++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
		}
	}
	return (j);
}

char			**ft_special_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s)
		return (0);
	if (!(str = (char **)malloc(sizeof(char *) * ft_count_words(s, c) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != 10 && s[i] != '\0')
		{
			len = ft_count_chr(&s[i], c);
			str[j] = ft_strsub(s, i, len);
			j++;
			i = i + len;
		}
		if ((s[i] == c || s[i] == 10) && s[i] != '\0')
			i++;
	}
	str[ft_count_words(s, c)] = NULL;
	return (str);
}