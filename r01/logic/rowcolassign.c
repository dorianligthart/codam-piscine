/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rowcolassign.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/17 19:08:09 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/17 21:27:38 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    gen(char v[4][4])
{
	int T; // switch trigger
	int i;
	int j;
	
	
	i = 0;
	j = 0;
	
	// while (1+1=2)
	// {      
	if (T == 0)            //descending down
	{
		while (i < 4)
		{
			while (j < 4)
			{
				if (v[i][j] == 5)
				{
					v[i][j] = 0;
				}
				else
				v[i][j]++;
				write(1, &v[i][j], 1);
				j++;
			}
			i++;              
		}
		T = 1;
		gen(v);
	}

	if (T == 1)            //ascending up
	{
		while (i > 0)
		{
			while (j > 0)
			{
				if (v[i][j] == 5)
				{
					v[i][j] = 0;
					
				}
				else
				v[i][j]++;
				write(1, &v[i][j], 1);
				j--;
			}
			i--;             
		}
		T = 0;
		gen(v);
	} 
}


int main(void)
{
	char li[4][4];
	int i;
	int j;
	int f;
	char list[16];

	f = 0;
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			li[i][j] = i;
			j++;
		}
		i++;
	}
	printf("%c", li[0][0]);

	gen(li);
	return 0;
}