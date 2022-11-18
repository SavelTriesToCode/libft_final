/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:16:05 by jtang             #+#    #+#             */
/*   Updated: 2022/11/10 16:07:38 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	if (s[i] == '\0')
		return (0);
	if (s[i] == c)
		words--;
	while (s[i])
	{
		if (s[i] == c)
		{
			words++;
			while (s[i + 1] == c)
				i++;
		}
		i++;
	}
	if (s[i - 1] != c)
		words += 1;
	return (words);
}

/*char	*calword(char const *s, int start, int end)
{
	int		len;
	char	*calword;

	len = 0;
	if ((end - start) >= 0)
		calword = (char *)ft_calloc((end - start) + 1, sizeof(char));
	while (start < end)
	{
		calword[len] = s[start];
		len++;
		start++;
	}
	calword[len] = '\0';
	return (calword);
}*/

char	*word_dup(char const **s, char c)
{
	int		i;
	char	*ret;

	i = 0;
	while ((*s)[i] && (*s)[i] != c)
		i++;
	ret = malloc((i + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (**s && **s != c)
	{
		ret[i++] = **s;
		(*s)++;
	}
	ret[i] = 0;
	return (ret);
}

char	**free_tab(char **ss)
{
	int	i;

	i = 0;
	while (ss[i])
		free(ss[i++]);
	free(ss);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**scalloc;

	if (!s)
		return (NULL);
	scalloc = malloc((count(s, c) + 1) * sizeof(char *));
	if (!scalloc)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			scalloc[i] = word_dup(&s, c);
			if (!scalloc[i++])
				return (free_tab(scalloc));
		}
	}
	scalloc[i] = NULL;
	return (scalloc);
}

// #include <stdio.h>

// int main(int ac, char **av)
// {
// 	if (ac != 3)
// 		return (1);
// 	char **ret;
// 	int i = 0;
// 	ret = ft_split(av[1], av[2][0]);
// 	if (!ret)
// 	{
// 		printf("eeeet ...merde\n");
// 		return (1);
// 	}
// 	while (ret[i])
// 		printf("%s\n", ret[i++]);
// 	i = 0;
// 	while (ret[i])
// 		free(ret[i++]);
// 	free(ret);
// 	return (0);
// }
