/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:39:38 by sergmigu          #+#    #+#             */
/*   Updated: 2023/07/29 17:39:41 by sergmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_corner_03(int i, int j, int x, int y)
{
	if ((i == 1) && (j == 1))
	{
		ft_putchar('A');
	}
	else if ((i == 1) && (j == y))
	{
		ft_putchar('C'); 
	}
	else if ((i == x) && (j == 1))
	{
		ft_putchar('A');
	}
	else if ((i == x) && (j == y))
	{
		ft_putchar('C');
	}
}

void	print_not_corner_03(int i, int j, int x, int y)
{
	if ((i == 1) || (i == x) || (j == 1) || (j == y))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush03(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			if ((((i == 1) || i == y)) && ((j == 1) || (j == x)))
			{
				print_corner_03(i, j, y, x);
			}
			else
			{
				print_not_corner_03(i, j, y, x);
			}
			j ++;
		}
		ft_putchar('\n');
		j = 1;
		i ++;
	}
}
