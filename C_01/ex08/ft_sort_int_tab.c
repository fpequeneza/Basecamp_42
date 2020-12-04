/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:37:46 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/01 02:17:22 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int r;
	int guarda;

	i = 0;
	r = (size - 1);
	while (r > 0)
	{
		while (i < r)
		{
			if (tab[i] > tab[i + 1])
			{
				guarda = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = guarda;
			}
			i++;
		}
		i = 0;
		r--;
	}
}
