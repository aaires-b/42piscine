/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:04:09 by sergmigu          #+#    #+#             */
/*   Updated: 2023/07/29 16:04:14 by sergmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char *c);
void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int	main(void)
{
	rush00(0, 5);
	ft_putchar("\n");
	rush01(5, 5);
	ft_putchar("\n");
	rush02(5, 5);
	ft_putchar("\n");
	rush03(5, 5);
	ft_putchar("\n");
	rush04(5, 5);
	ft_putchar("\n");
	return (0);
}
