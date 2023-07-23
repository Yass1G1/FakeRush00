/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychouiti <ychouiti@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:43:52 by ychouiti          #+#    #+#             */
/*   Updated: 2023/07/22 18:30:40 by ychouiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	v_line(int x)
{
	int	width;

	width = x;
	if (width == x || width == 1)
	{
		ft_putchar('o');
		width--;
		while (width > 1)
		{
			ft_putchar('-');
			width--;
		}
		ft_putchar('o');
		width--;
		ft_putchar('\n');
	}
}

void	h_line(int x, int y)
{
	int	width;
	int	height;

	height = y;
	while (height > 1)
	{
		width = x;
		ft_putchar('|');
		width--;
		while (width > 1)
		{
			ft_putchar(' ');
			width--;
		}
		ft_putchar('|');
		ft_putchar('\n');
		height--;
	}
}

void	h_1_line(int y)
{
	ft_putchar('o');
	ft_putchar('\n');
	while (y > 2)
	{
		ft_putchar('|');
		ft_putchar('\n');
		y--;
	}
	ft_putchar('o');
}

void	rush(int x, int y)
{
	int	width;
	int	height;

	width = x;
	height = y;
	if (x == 1 && y == 1)
		ft_putchar('o');
	else if (x == 1 || y == 1)
	{
		if (x == 1)
		{
			h_1_line(y);
		}
		else
		{
			v_line(x);
		}
	}
	else
	{
		v_line(x);
		h_line(x, y);
		v_line(x);
	}
}
