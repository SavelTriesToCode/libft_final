/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:10:13 by jtang             #+#    #+#             */
/*   Updated: 2022/11/07 16:45:38 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

// void	minint(int fd)
// {
// 	ft_putchar_fd('-', fd);
// 	ft_putchar_fd('2', fd);
// 	ft_putchar_fd('1', fd);
// 	ft_putchar_fd('4', fd);
// 	ft_putchar_fd('7', fd);
// 	ft_putchar_fd('4', fd);
// 	ft_putchar_fd('8', fd);
// 	ft_putchar_fd('3', fd);
// 	ft_putchar_fd('6', fd);
// 	ft_putchar_fd('4', fd);
// 	ft_putchar_fd('8', fd);
// }

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	if (n <= 9 && n >= 0)
		ft_putchar_fd(n + 48, fd);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d", ft_putnbr_fd(982374, 1));
// 	//??????????????????????
// }