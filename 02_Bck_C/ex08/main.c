/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:25:52 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/03 04:19:30 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strlowcase(char *str);

int main()
{
	char list[] = "sdaFADSFf";
	
	//ft_strlowcase(&list[0]);
	
	printf("list = %s", ft_strlowcase(&list[0]));
	printf("\n");

	return (0);
}