/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 08:16:48 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/04 10:41:07 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= nb / 2)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int main ()
{
	int nb = 6;

	printf ("%d", ft_is_prime(nb));
}*/