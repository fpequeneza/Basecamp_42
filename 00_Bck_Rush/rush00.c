/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnicolas <pnicolas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 11:30:30 by pnicolas          #+#    #+#             */
/*   Updated: 2020/11/22 22:13:54 by pnicolas         ###   ########.fr       */
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
		ft_putchar('|');
	}
}

void	ft_corners_line(int l, int c, int x, int y)
{
	if ((l == 1 && c == 1) || (l == y && c == x && y > 1 && x > 1))
	{
		ft_putchar('o');
	}
	else if ((l == 1 && c == x) || (l == y && c == 1))
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
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
