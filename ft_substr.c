/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:37:20 by jtang             #+#    #+#             */
/*   Updated: 2022/11/18 17:00:25 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*subs;

	i = 0;
	j = 0;
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	subs = (char *)ft_calloc(len + 1, sizeof(char));
	if (!subs)
		return (0);
	while (s[i] && i < start)
		i++;
	while (s[i] && i < (len + start))
	{
		subs[j] = s[i];
		j++;
		i++;
	}
	return (subs);
}
