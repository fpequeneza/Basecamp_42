/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 03:59:27 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/04 19:34:59 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	i;
	char			diff;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0' && i < nb)
	{
		if	(nb == 0)
			return (dest);
		else
		{
			diff = src[i];
			dest[c] = diff;
			c++;
			i++;
		}
	}
	dest[c] = '\0';
	return (dest);
}
