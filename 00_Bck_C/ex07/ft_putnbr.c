/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:47:47 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/03 16:30:58 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char		number[11];
	long int	l_nb;
	int			c;

	l_nb = nb;
	c = 0;
	if (l_nb < 0)
	{
		write(1, "-", 1);
		l_nb = -l_nb;
	}
	while (l_nb >= 0)
	{
		*(number + c) = (l_nb % 10) + '0';
		l_nb = l_nb / 10;
		if (l_nb / 10 == l_nb)
			break ;
		c++;
	}
	while (c >= 0)
	{
		write(1, number + c, 1);
		c--;
	}
}
