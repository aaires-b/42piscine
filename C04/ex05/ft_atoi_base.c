/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:13:06 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/01 14:22:40 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	index_of_base(unsigned char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	a;
	int	s;
	int	i;

	size = check_base(base);
	i = 0;
	a = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == '+' || str [i] == '-') && str[i])
	{
		if (str[i] == '-')
		{
			s *= -1;
		}
		i++;
	}
	while (str[i] >= base[0] && str[i] <= base[size - 1] && str[i] != '\0')
	{
		a = (size * a) + (index_of_base(str[i], base));
		i++;
	}
	return (a * s);
}
/*int main()
{
	char str[] = "11101";
	char base[] = "01";
	
	printf("%d", ft_atoi_base(str, base));
}*/