/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:57:58 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/02 21:31:13 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int c;
	int flag;

	c = 0;
	flag = 1;
	while (str[c] != '\0')
	{
		if ((str[c] >= 48 && str[c] <= 57) ||
			(str[c] >= 65 && str[c] <= 90) ||
			(str[c] >= 97 && str[c] <= 122))
		{
			if (flag && (str[c] >= 97 && str[c] <= 122))
				str[c] = str[c] - 32;
			else if (!flag && (str[c] >= 65 && str[c] <= 90))
				str[c] = str[c] + 32;
			flag = 0;
		}
		else
			flag = 1;
		c++;
	}
	return (str);
}
