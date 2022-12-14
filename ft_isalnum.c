/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:33:44 by jtang             #+#    #+#             */
/*   Updated: 2022/10/20 20:03:56 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	if ((n >= '0' && n <= '9') || (n >= 'A' && n <= 'Z') || \
			(n >= 'a' && n <= 'z'))
		return (n);
	else
		return (0);
}
