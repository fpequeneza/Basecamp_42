/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:23:01 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/03 04:11:55 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
	char list[]= "ashhsIUSDHASHD2das";
	
	ft_str_is_alpha(&list[0]);
	
	printf("list = %d",ft_str_is_alpha(list));
	printf("\n");
	return (0);
}