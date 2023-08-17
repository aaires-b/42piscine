/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 05:55:17 by aaires-b          #+#    #+#             */
/*   Updated: 2023/07/29 11:17:13 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(char fim, char meio, char direita, int x)
{
	ft_putchar(fim);
	x--;
	while (x > 1)
	{
		ft_putchar(meio);
		x--;
	}
	if (x == 1)
		ft_putchar(direita);
	ft_putchar('\n');
}

void	rush01(int x, int y)
{
	if (x < 1 && y < 1)
		return ;
	ft_line('/', '*', '\\', x);
	y--;
	while (y > 1)
	{
		ft_line('*', ' ', '*', x);
		y--;
	}
	if (y == 1)
		ft_line('\\', '-', '/', x);
}
