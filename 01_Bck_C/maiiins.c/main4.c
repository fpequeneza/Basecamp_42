/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:23:03 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/11/29 20:12:42 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main()
{
	int a;
	int b;
	
	a = 10;
	b = 3;
	ft_ultimate_div_mod( &a, &b);
	printf("%d\n%d\n", a, b);
	return (0);	
}