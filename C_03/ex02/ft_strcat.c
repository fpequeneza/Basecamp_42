/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 00:38:15 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/04 19:34:12 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		c;
	int		i;
	char	diff;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0')
	{
		diff = src[i];
		dest[c] = diff;
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
