#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// typedef struct findbsq cellproperty;
// {
// 	int y;
// 	int x;
// 	int obst;
// };
// char *writeSquare()
// {

// }

int recurse_squarecalc(int *info, char *arr, int *bigsqr, int *q) //info[max x, max y, i], *map, 	*arr/*map,		biggest square that has been seen.
{
	int x_max = info[0];
	int y_max = info[1];
	int pos = info[2];
	int x_rel = info[3];
	int y_rel = info[4];
	int empty = info[5];
	int i = 0;
	int j = 0;

	while (arr[pos + ((*q - 1) * x_max) + i] == empty && i < *q)
		i++;
	while (arr[((pos + *q - 1) + j)] == empty && (j / x_max) < *q)
		j = j + x_max;

	if (i == *q && (j/x_max) == *q) //if while loops ended on correct q value.
	{
		if (*bigsqr < *q)
			{*bigsqr = *q;}

		*q = *q + 1;
		recurse_squarecalc(info, arr, bigsqr, q);
	}
	if (*q != i || *q != (j/x_max))
		return (*q - 1);

	return (0);
}

void bsqcheck(char *prop, char *arr, int x, int y) // prop[3]: 0=field_char, 1=obstacle_char, 2=fill_char.		arr = map/array, 		x=linelength,		y=amount of lines.
{
	int i;
	int info[6];
	int div;
	int mod;
	int bigsqr;
	int q;
	int *resultarr = (unsigned long int *)malloc((x*y) * sizeof(long int));
	int max;
	int tmp;

	q = 2;
	info[0] = x;
	info[1] = y;
	info[5] = prop[0];
	i = 0;
	while (i < (x*y))
	{
		if (arr[i] == prop[0])
		{
			bigsqr = 1;
			info[2] = i;
			info[3] = i % x;
			info[4] = i / x;
			resultarr[i] = recurse_squarecalc(info, arr, &bigsqr, &q);
			q = 0;
		}		
		i++;
	}
	max = 0;
	i = 0;
	while (i < (x*y))
	{
		if (resultarr[i] > max)
		{
			max = resultarr[i];
			tmp = i;
		}
		i++;
	}
	printf("found biggest square on pos: %i, with size %i by %i.", tmp, max, max);
}

int main(void)
{
	// char array[] = {46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0};
	char array[] = {46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 10, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 0};
	char prop[] = ".ox";
	bsqcheck(prop, array, 28, 9);
	return 0;
}