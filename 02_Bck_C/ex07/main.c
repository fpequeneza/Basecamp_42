/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:02:07 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/02 18:05:25 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strupcase(char *str);

int 	main()
{
	char list[] = "asddsfeeTERTER45345";

	ft_strupcase(&list[0]);
	printf("list = %s", ft_strupcase(list));
	printf("\n");
	return (0);
}