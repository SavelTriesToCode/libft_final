/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:31:24 by jtang             #+#    #+#             */
/*   Updated: 2022/11/03 20:07:31 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*schar;
	size_t			i;

	i = 0;
	schar = (unsigned char *)s;
	while (n > i)
	{
		if (schar[i] == (unsigned char)c)
			return (&schar[i]);
		i++;
	}
	return (NULL);
}
