/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:14:25 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/04 03:14:52 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int c;

	c = 0;
	if (n == 0 || (s1[c] == '\0' && s2[c] == '\0'))
		return (0);
	while (s1[c] == s2[c])
	{
		c++;
		if (c == n)
			return (0);
	}
	return (s1[c] - s2[c]);
}