/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:03:37 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/03 04:35:16 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		while ( str[c] < 32 || str[c] > 126)
		{
			return(0);
		}
		c++;
	}
	return(1);
}