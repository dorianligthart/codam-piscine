/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 17:17:37 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/23 14:51:36 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {
//     int div;
//     int mod;
//     int a;
//     int b;

//     a = 50;
//     b = 4;
//     ft_div_mod(a, b, &div, &mod);

//     printf("%i,\n%i", div, mod);
//     return 0;
// }
