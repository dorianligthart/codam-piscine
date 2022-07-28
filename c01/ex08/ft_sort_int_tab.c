/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 15:26:44 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/26 15:57:58 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	x;

	x = 0;
	while (x < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		x++;
	}
}

// int main() //array "A", of "N" numbers long. A[i] >= A[i]-1 where 1 <= i < N
// {
// 	int i;
// 	int size = 9;
// 	int array[] = {123, 235, -346, 1, 23, 0, 2, 3, -345};

// 	ft_sort_int_tab(array, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%i, ", array[i]);
// 		i++;
// 	}
// 	return 0;
// }
