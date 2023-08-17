/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 04:50:41 by aaires-b          #+#    #+#             */
/*   Updated: 2023/07/30 13:58:33 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z') 
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	test[] = "000";
	int		a;

	a = ft_str_is_lowercase(test);
	printf("%d", a);
}
*/