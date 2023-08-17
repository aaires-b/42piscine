/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 05:15:42 by aaires-b          #+#    #+#             */
/*   Updated: 2023/07/29 15:47:06 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] >= 127) 
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char	test[] = "NULL";
	int		a;

	a = ft_str_is_printable(test);
	printf("%d", a);
}
*/