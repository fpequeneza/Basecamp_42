/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:43:46 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/03 18:29:49 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);

int		main(void)
{
	long int nb;

	nb = -2147483648;
	ft_putnbr(nb);
	printf("\n");
	return (0);
}
