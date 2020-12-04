/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:03:02 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/01 03:04:18 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int r;
	int guarda;

	i = 0;
	r = (size - 1);
	while (i < size && r > i)
	{
		guarda = tab[i];
		tab[i] = tab[r];
		tab[r] = guarda;
		i++;
		r--;
	}
}
