/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:07:12 by sergmigu          #+#    #+#             */
/*   Updated: 2023/07/29 17:07:16 by sergmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_corner_00(void)
{
	ft_putchar('o');
}

void	print_not_corner_00(int i, int j, int x, int y)
{
	if ((i == 1) || (i == x))
	{
		ft_putchar('-');
	}
	else if ((j == 1) || (j == y))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush00(int x, int y)
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
				print_corner_00();
			}
			else
			{
				print_not_corner_00(i, j, y, x);
			}
			j ++;
		}
		ft_putchar('\n');
		j = 1;
		i ++;
	}
}
