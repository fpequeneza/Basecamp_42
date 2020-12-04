/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 03:59:45 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/04 17:21:29 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char dest1[50] = "Eu gosto de ";
	char src1[50] = "cerveja puro malte :)";
	char dest[50] = "Eu gosto de ";
	char src[50] = "cerveja puro malte :)";
	unsigned int nb;

	nb = 7;		
	printf("%s",strncat(&dest1[0], &src1[0], nb));
	printf("\n");
	printf("%s",ft_strncat(&dest[0], &src[0], nb));
	printf("\n");
	return (0);
}
