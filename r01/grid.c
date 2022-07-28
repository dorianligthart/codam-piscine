#include <unistd.h>
#include <stdio.h>

void grid(char map[4][4])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			char tmp;
			tmp = map[i][j];
			if (tmp == 0) 
			{
				tmp = 'n';
			}
			write(1, &tmp, 1);
			if (j == 3)
			{
				write(1, "\n", 1);
			}
			j++;
		}
		j = 0;
		i++;
	}
}
