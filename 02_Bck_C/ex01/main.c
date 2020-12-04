/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:57:34 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/02 17:56:17 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
    char src_original[] = "cadete 42"; 
    char dest_original[] = "testesteste";
    char src[] = "cadete 42"; 
    char dest[] = "testesteste";
	unsigned int n = 3;

    printf("Essa é frase original: %s", dest);
    printf("\n");
	strncpy(dest,src, n);
    printf("Agora a frase foi alterada pela função: %s", dest);
    printf("\n");
    
    printf("Essa é frase original: %s", dest_original);
    printf("\n");
	ft_strncpy(dest_original,src_original, n);
    printf("Agora a frase foi alterada pela função proposta: %s", dest_original);
    printf("\n");
    return (0);
}