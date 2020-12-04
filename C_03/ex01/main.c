/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:14:50 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/04 20:39:10 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	unsigned int n;
	char list1[] = "B";
	char list2[] = "A";
	char str1[] = "B";
	char str2[] = "A";

	n = 0;
	printf("A strncmp retorna = %d", strncmp(&list1[0], &list2[0], n));
	printf("\n");
	printf("A ft_strncmp retorna = %d", ft_strncmp(&str1[0], &str2[0], n));
	printf("\n");
	return (0);
}

