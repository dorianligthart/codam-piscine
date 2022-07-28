/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 17:04:42 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/23 14:43:45 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int main(void)
// {
//     int a;
//     int b;

//     a = 1234;
//     b = 4321;

//     ft_swap(&a, &b);
//     printf("%i,\n%i", a, b);
//     return (0);
// }
