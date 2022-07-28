/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 21:49:28 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/23 14:52:53 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;
	int	tmp2;

	tmp = *a / *b;
	tmp2 = *a % *b;
	*a = tmp;
	*b = tmp2;
}

// int main(void)
// {
//     int a;
//     int b;

//     a = 31;
//     b = 5;
//     ft_ultimate_div_mod(&a, &b);

//     printf("%i,\n%i", a, b);
//     return 0;
// }
