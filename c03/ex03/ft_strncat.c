/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 15:46:44 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/26 16:08:33 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	unsigned j;

	if (nb < 0) // WATCH OUT!! doesnt work has to be fixed before turnin
	{
		return(0);
	}
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(dest);
}

int	main(void)
{
	// char a[] = *argv[1];
	// char b[] = *argv[2];
	// int nb = argv[3] - '0';
	// if (argc == 4)
	// {
	// 	printf("own function:\n%s\n", ft_strncat(a, b));
	// 	printf("strcat function: %s", strcat("heyyy ", "asdasd"));
	// }
	// else
	// 	printf("error");
	char a[100] = "okkkk";
	char b[100] = "heyyyy";

	printf("own function: %s\n", ft_strncat(a, b, -1));
	// printf("strcat function: %s\n", strncat(a, b, -1));
	return (0);
}
