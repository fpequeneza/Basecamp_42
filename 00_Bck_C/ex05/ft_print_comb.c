/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 12:57:10 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/11/27 22:45:40 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		print_number(int n1, int n2, int n3)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
	write(1, ", ", 2);
}

void		print_final_number(int n1, int n2, int n3)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
}

void		ft_print_comb(void)
{
	int n1;
	int n2;
	int n3;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = n1 + 1;
		while (n2 <= '9')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				if (n1 == '7' && n2 == '8' && n3 == '9')
					print_final_number(n1, n2, n3);
				else
					print_number(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
