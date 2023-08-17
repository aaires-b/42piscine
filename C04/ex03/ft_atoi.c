/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:46:41 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/01 14:20:25 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_atoi(char *str)
{
	int	a;
	int	s;
	int	i;

	a = 0;
	s = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			s *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = 10 * a + (str[i] - 48);
		i++;
	}
	return (a *s);
}
int main()
{
	char str[] = "-2147483648";
	
	printf("%d", ft_atoi(str));
}
