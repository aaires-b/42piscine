/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:21:24 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/04 10:09:20 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0); 
	}
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*int main()
{
	int power = 0;
	int nb = 0;

	printf("%d", ft_iterative_power(nb, power));
}*/