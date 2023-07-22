/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychouiti <ychouiti@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:43:52 by ychouiti          #+#    #+#             */
/*   Updated: 2023/07/22 16:50:10 by ychouiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	largeur(int x)
{
	int	width;

	width = x;

    // ---------- CORNERS ----------
	if (width == x || width == 1) 
	{
		ft_putchar('o');
		width--; 

                // --------- LARGEUR ---------- 
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

void	hauteur(int x, int y)
{
		int	width;
		int	height;
 
		height = y;

	// ---------- HAUTEUR -----------
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

void	h_line(y)
{
	int counter = y;

	ft_putchar('o');
	ft_putchar('\n');
	while (counter > 2)
	{
		ft_putchar('|');
		ft_putchar('\n');
		counter--;
	}
	ft_putchar('o');
}

void	rush(int x, int y)
{
	int	width;
	int	height;

	width = x; // on déclare que la largeur parce que la hauteur sera déclaré dans une boucle
	height = y;

	if (x == 1 && y == 1)
	{
		ft_putchar('o');
	}
	else if (x == 1 || y == 1)
	{
		if (x == 1)
		{
			h_line(y);	
		}
		else
		{
			largeur(x);
		}
	}
	else
	{
		largeur(x);
		hauteur(x, y);
		largeur(x);
	}
	
}
