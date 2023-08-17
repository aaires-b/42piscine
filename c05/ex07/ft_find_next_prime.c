/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 08:45:52 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/13 12:22:07 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next;

	next = nb + 1;
	if (nb <= 1)
		return (2);
	else if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!ft_is_prime(next))
		{
			next++;
		}
		return (next);
	}
}
/*int main()
{
	int nb = 2147483647;
	
	printf("%d", ft_find_next_prime(nb));
}*/
