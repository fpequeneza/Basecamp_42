/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnicolas <pnicolas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 11:30:30 by pnicolas          #+#    #+#             */
/*   Updated: 2020/11/22 22:14:13 by pnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_middle(int x, int c)
{
	if (c > 1 && c < x)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}

void	ft_corners_line(int l, int c, int x, int y)
{
	if ((l == 1 && c == 1) || (l == 1 && c == x))
	{
		ft_putchar('A');
	}
	else if ((l == y && c == 1) || (l == y && c == x))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int c;
	int l;

	c = 1;
	l = 1;
	while ((l <= y) && (y >= 1) && (x >= 1))
	{
		while (c <= x)
		{
			if (l > 1 && l < y)
			{
				ft_middle(x, c);
			}
			else
			{
				ft_corners_line(l, c, x, y);
			}
			c++;
		}
		ft_putchar('\n');
		c = 1;
		l++;
	}
}
