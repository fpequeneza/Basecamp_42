/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 03:13:28 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/03 04:13:55 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main()
{
	char list[] = "udy4asd";
	
	ft_str_is_lowercase(&list[0]);
	printf("list = %d", ft_str_is_lowercase(list));
	printf("\n");
	return(0);

}
