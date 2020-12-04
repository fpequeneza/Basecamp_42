/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:39:24 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/04 19:03:30 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

/*int		main()
{
	char str1[] = "achar agulha no palheiro";
	char to_find1[] = "agulha";
	char str[] = "achar agulha no palheiro";
	char to_find[] = "agulha";
	char *result;

	printf("%s\n", strstr(&str1[0],&to_find1[0]));
	
	result = ft_strstr(&str[0],&to_find[0]);
	
	printf("%s\n",result);
	return (0);
}*/

int        main(void)
{
    char            *to_find;
    char            *src;
    char            *res;

    src = "Hello WWorld";
    to_find = "World";
    printf("to_find: %s | src: %s\n", to_find, src);
    res = ft_strstr(src, to_find);
    printf("to_find: %s | src: %s | res: %s\n", to_find, src, res);
    return (0);
}

