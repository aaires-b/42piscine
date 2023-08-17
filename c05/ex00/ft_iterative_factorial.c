/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:31:36 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/04 10:39:23 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	res;

	a = 1;
	res = 1;
	while (a <= nb)
	{
		res *= a;
		a++;
	}
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (res);
}
/*int main()
{
	int nb = -2;

	printf("%d", ft_iterative_factorial(nb));
}*/