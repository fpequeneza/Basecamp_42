/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 00:49:53 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/04 17:29:11 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char dest1[25] = "Eu gosto de ";
	char src1[] = "cerveja puro malte :)";
	char dest[25] = "Eu gosto de ";
	char src[] = "cerveja puro malte :)";

	printf("%s",strcat(&dest1[0], &src1[0]));
	printf("\n");
	printf("%s",ft_strcat(&dest[0], &src[0]));
	printf("\n");
	return (0);
}

