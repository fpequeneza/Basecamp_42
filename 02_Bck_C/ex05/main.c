/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 03:54:34 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/03 04:15:35 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main()
{
	char list[] = "SAHDAKSJD";
	
	ft_str_is_uppercase(&list[0]);
	printf("list = %d", ft_str_is_uppercase(list));
	printf("\n");
	return(0);

}
