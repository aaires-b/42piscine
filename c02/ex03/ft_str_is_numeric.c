/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 04:43:41 by aaires-b          #+#    #+#             */
/*   Updated: 2023/07/30 13:58:25 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || str[i] >= 58) 
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	test[] = "abc";
	int		a;

	a = ft_str_is_numeric(test);
	printf("%d", a);
}
*/