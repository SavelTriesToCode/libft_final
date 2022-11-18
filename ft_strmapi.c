/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:09:43 by jtang             #+#    #+#             */
/*   Updated: 2022/11/03 14:22:53 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*fs;

	i = 0;
	if (!s)
		return (0);
	fs = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!fs)
		return (NULL);
	while (i < ft_strlen(s))
	{
		fs[i] = f(i, s[i]);
		i++;
	}
	return (fs);
}
