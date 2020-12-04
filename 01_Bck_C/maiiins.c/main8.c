/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:36:53 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/01 01:20:11 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size);

int        main()
{
    int tab[12] = { 3, 5, 1, 4, 2, 6, 9, 8, 12, 10, 11, 7};
    int size;
	int count;
    
	count = 0;
    size = 12;
    while (count < size)
    {
      printf("%d ", tab[count]);
      count++;
    }
      printf("\n");

	ft_sort_int_tab(tab, size);

	count = 0;
    while (count < size)
    {
      printf("%d ", tab[count]);
      count++;
    }
	
	printf("\n");
	
    return (0);
}