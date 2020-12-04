/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:03:41 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/03 04:16:43 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main()
{
	char list[] = "";
	
	ft_str_is_printable(&list[0]);
	printf("list = %d", ft_str_is_printable(list));
	printf("\n");
	return(0);

}
