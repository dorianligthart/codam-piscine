/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 14:57:55 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/18 20:59:03 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char3comb(char a, char b, char c)
{
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, &c, 1);
					if (a != '7')
						write(1, ", ", 2);
					else
					{
					}
				}
				c++;
			}
			c = '2';
			b++;
		}
		b = '1';
		a++;
	}
}

void	ft_print_comb(void)
{
	char3comb('0', '1', '2');
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
