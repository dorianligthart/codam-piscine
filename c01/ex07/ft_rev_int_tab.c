/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 22:21:49 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/26 15:56:47 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

// int main()
// {   
// 	int i;
// 	int size;

// 	size = 5;
//     int a[7] = {-12, 8, 9, 58, 112};
//     ft_rev_int_tab(a, size);
// 	while (i < size)
// 	{
// 		printf("%i, ", a[i]);
// 		i++;
// 	}
//     return 0; 
// }
