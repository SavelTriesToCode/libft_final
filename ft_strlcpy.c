/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:37:20 by jtang             #+#    #+#             */
/*   Updated: 2022/10/31 17:54:55 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
	/*
	if (dstsize <= 0)
		return (ft_strlen(src));
	while (i < dstsize - 1) 
	{
		dst[i] = src[i];
		if (dst[i] == '\0' && src[i] == '\0')
			return (ft_strlen(src));
		i++;
	}
	dst[i] = '\0';
	return(ft_strlen(dst));

	size_t	i;

	i = 0;
	if (!src || !dst || dstsize == 0)
		return (dstsize);
	while ((src[i] != '\0' || dst[i] != '\0') && (i < dstsize))
	{
		dst[dstsize + i] = src[dstsize + i];
		i++;
	}
	dst[i] = '\0';
	return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char	s1[] = "123";
	char	s2[] = "4567";
	//ft_strlcpy(s1, s2, 3);
	strlcpy(s1, s2, 3);
	printf("%s", s1);
}*/
