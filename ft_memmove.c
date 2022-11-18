/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:49:56 by jtang             #+#    #+#             */
/*   Updated: 2022/11/07 17:28:48 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ssrc;
	unsigned char	*sdst;

	if (!dst && !src)
		return (NULL);
	ssrc = (unsigned char *)src;
	sdst = (unsigned char *)dst;
	i = 0;
	if (src < dst)
	{
		while (len-- > 0)
			sdst[len] = ssrc[len];
	}
	else
	{
		while (i < len)
		{
			sdst[i] = ssrc[i];
			i++;
		}
	}
	return (dst);
}
