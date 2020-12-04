/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:02:58 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/01 03:03:52 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
    int tab[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int size;
    
    size = 12;
    ft_rev_int_tab(tab, size);
    
    int count;
    count = 0;
    
    while (count < size)
    {
      printf("%d ", tab[count]);
      count++;
    }
    
    return (0);    
}