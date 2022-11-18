/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:10:13 by jtang             #+#    #+#             */
/*   Updated: 2022/11/07 16:45:38 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checksetstart(char c, char const *set)
{
	int	start;

	start = 0;
	while (set[start])
	{
		if (set[start] == c)
			return (0);
		start++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (!checksetstart(s1[start], set) && s1[start])
		start++;
	if (!end)
		return (ft_strdup(""));
	while (!checksetstart(s1[end - 1], set) && end > start)
		end--;
	res = ft_calloc((end - start + 1), sizeof(*s1));
	if (!res)
		return (0);
	while (end > start)
		res[i++] = s1[start++];
	return (res);
}
// if (!end)paco
// 		return (ft_strdup(""));