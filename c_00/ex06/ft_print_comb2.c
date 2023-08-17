/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:13:59 by aaires-b          #+#    #+#             */
/*   Updated: 2023/07/26 19:17:00 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int a)
{
	int	first_number;
	int	second_number;

	first_number = a / 10 + 48;
	second_number = a % 10 + 48;
	write(1, &first_number, 1);
	write(1, &second_number, 1);
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	number2 = 0;
	while (number1 < 98)
	{
		while (number2 < 99)
		{
			number2 ++;
			if (number1 < number2)
			{
				write_number(number1);
				write(1, " ", 1);
				write_number(number2);
				write(1, ", ", 2);
			}
		}
		number1 ++;
		number2 = 0;
	}
	write(1, "98 99", 5);
}
