/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 14:45:12 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/18 20:59:33 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnum(int a, int b, int c, int d)
{
	if (10 * (a - 48) + (b - 48) < 10 * (c - 48) + (d - 48))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (a == 57 && b == 56 && c == 57 && d == 57)
		{
		}
		else
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_combthat(int a, int b, int c, int d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					printnum(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = '0';
		}
		a++;
		b = '0';
	}
}

void	ft_print_comb2(void)
{
	ft_print_combthat(48, 48, 48, 49);
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
