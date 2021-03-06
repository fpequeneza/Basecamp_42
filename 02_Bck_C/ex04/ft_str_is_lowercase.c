/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 03:13:31 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/02 18:20:35 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		while (str[c] < 'a' || str[c] > 'z')
		{
			return (0);
		}
		c++;
	}
	return (1);
}
