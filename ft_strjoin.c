/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:16:35 by jtang             #+#    #+#             */
/*   Updated: 2022/11/07 16:09:46 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*sfull;

	i = 0;
	j = 0;
	sfull = (char *)ft_calloc((ft_strlen(s1) + ft_strlen(s2)) + 1, \
			sizeof(char));
	if (!sfull)
		return (0);
	if (i < (ft_strlen(s1) + ft_strlen(s2) + 1))
	{
		while (s1[i])
		{	
			sfull[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			sfull[i] = s2[j];
			i++;
			j++;
		}
	}
	return (sfull);
}
