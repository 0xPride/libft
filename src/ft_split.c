#include <stdlib.h>
#include "libft.h"

static int	count_slices(char const *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (!flag)
			{
				count++;
				flag = 1;
			}
		}
		else
		{
			flag = 0;
		}
		s++;
	}
	if (*(s--) != c)
		count++;
	return (count);
}

static char *get_word(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int get_next_word_index(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c)
		i++;
	while (s[i] == c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	char	*word;
	int		slices_count;
	int		i;

	if (!s)
		return (NULL);

	slices_count = count_slices(s, c);
	words = (char **)malloc(sizeof(char *) * (slices_count + 1));
	i = 0;
	while (s[i])
	{
		word = get_word(&s[i], c);
		if (*word != '\0')
		{
			words[i] = word;
			i++;
		}
		i = get_next_word_index(&s[i], c);
	}
	words[i] = NULL;
	return (words);
}