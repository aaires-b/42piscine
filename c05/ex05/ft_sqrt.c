/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:01:44 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/04 11:05:54 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (i * i < nb)
		i++;
	if (i * i > nb)
		return (0);
	return (i);
}
/*int main()
{
	int nb = 16;

	printf("%d", ft_sqrt(nb));
}*/