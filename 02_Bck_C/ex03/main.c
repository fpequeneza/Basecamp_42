/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 02:40:38 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/03 04:12:40 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main()
{
	char list[] = "12837";
	
	ft_str_is_numeric(&list[0]);
	
	printf("list = %d", ft_str_is_numeric(list));
	printf("\n");
	return (0);
}
