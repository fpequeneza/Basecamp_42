/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:00:45 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/04 01:22:53 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char list[] = " ";
	char list2[] = "";
	char str1[] = " ";
	char str2[] = "";

	printf("É diferente em = %d", strcmp(&list[0], &list2[0]));
	printf("\n");
	printf("É diferente em = %d", ft_strcmp(&str1[0], &str2[0]));
	printf("\n");
	return (0);
}
