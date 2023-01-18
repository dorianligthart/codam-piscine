/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 14:44:41 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/19 00:10:37 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	i;

	i = 48;
	while (i < 58)
	{
		write(1, &i, 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
