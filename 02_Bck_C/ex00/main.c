/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 02:09:23 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/01 12:09:15 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
    char src_original[15] = "Hello 42"; 
    char dest_original[15] = "Ola";
    char src[15] = "Hello 42"; 
    char dest[15] = "Ola";

    printf("Essa é frase original: %s", dest);
    printf("\n");
	strcpy(dest,src);
    printf("Agora a frase foi alterada pela função: %s", dest);
    printf("\n");
    
    printf("Essa é frase original: %s", dest_original);
    printf("\n");
	ft_strcpy(dest_original,src_original);
    printf("Agora a frase foi alterada pela função proposta: %s", dest_original);
    printf("\n");
    return (0);
}