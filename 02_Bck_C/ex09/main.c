/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:58:11 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/03 04:22:35 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main()
{
	char list[] = "oi, tudo bem? 42Palavras quarenta-e-duas; cinquenta+e+um";
	printf("list = %s",ft_strcapitalize(&list[0]));
	printf("\n");
	return (0);
}
