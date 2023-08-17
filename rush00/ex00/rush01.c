/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:03:49 by sergmigu          #+#    #+#             */
/*   Updated: 2023/07/29 17:04:10 by sergmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_corner_01(int i, int j, int x, int y)
{
	if ((i == 1) && (j == 1))
	{
		ft_putchar('/');
	}
	else if ((i == 1) && (j == y))
	{
		ft_putchar('\\'); 
	}
	else if ((i == x) && (j == 1))
	{
		ft_putchar('\\');
	}
	else if ((i == x) && (j == y))
	{
		ft_putchar('/');
	}
}

void	print_not_corner_01(int i, int j, int x, int y)
{
	if ((i == 1) || (i == x) || (j == 1) || (j == y))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush01(int x, int y)
{
	int	i	;
	int	j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			if ((((i == 1) || i == y)) && ((j == 1) || (j == x)))
			{
				print_corner_01(i, j, y, x);
			}
			else
			{
				print_not_corner_01(i, j, y, x);
			}
			j ++;
		}
		ft_putchar('\n');
		j = 1;
		i ++;
	}
}
