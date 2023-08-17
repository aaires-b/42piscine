/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:04:22 by aaires-b          #+#    #+#             */
/*   Updated: 2023/07/30 12:17:13 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	ts;

	i = 0;
	j = size - 1;
	ts = size / 2;
	while (i < ts)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}

/*int main(void)
{
	int f[5] = {1,2,3,4,5};
	int i = 0;
	
	ft_rev_int_tab(f, 5);
	while (i < 5)
	{
		printf("%d", f[i]);
		i++;
	}
	
}
*/
