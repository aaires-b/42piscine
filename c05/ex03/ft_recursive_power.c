/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:01:04 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/03 20:22:48 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	else 
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*int main()
{
	int nb = 4;
	int power = 2;

	printf ("%d", ft_recursive_power(nb, power));
}*/