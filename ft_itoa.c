/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:37:29 by jtang             #+#    #+#             */
/*   Updated: 2022/11/13 16:29:34 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"
#include <stdlib.h>

int	ft_size(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	if (n < 10)
		len++;
	return (len);
}

char	*iszero(void)
{
	char	*str;

	str = ft_calloc(2, sizeof(char));
	if (!str)
		return (0);
	str[0] = 48;
	return (str);
}

char	*ft_min_int(void)
{
	char	*min;

	min = ft_calloc(11 + 1, sizeof(char));
	if (!min)
		return (NULL);
	min[0] = '-';
	min[1] = '2';
	min[2] = '1';
	min[3] = '4';
	min[4] = '7';
	min[5] = '4';
	min[6] = '8';
	min[7] = '3';
	min[8] = '6';
	min[9] = '4';
	min[10] = '8';
	return (min);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	if (n == -2147483648)
		return (ft_min_int());
	if (n == 0)
		return (iszero());
	i = ft_size(n);
	s = ft_calloc(1 + i, sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (--i > 0)
	{
		s[i] = ((n % 10) + 48);
		if (n < 10)
			break ;
		n = n / 10;
	}
	s[i] = (n + 48);
	return (s);
}
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	(void) ac;
// 	printf("\n%s", ft_itoa(ft_atoi(av[1])));
// 	return (0);
// }
