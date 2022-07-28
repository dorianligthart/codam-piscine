#include <stdio.h>
#include <unistd.h>

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
	printf("%i		%i		%i		%i		%i		%i		\n", info[0],  info[1], info[2],  info[3], info[4], info[5]); //x_max: 	y_max:	 position i: 	x_relative:		y_relative:		empty_char:
	int posit;	//i
	int x_max; 	//27
	int y_max;	//9
	int x_rel;  //i(x)
	int y_rel;  //i(y)
	int corner;	//arr[opposite corner of starting point according to q size.]
	int empty;	//"."
	int result;

	int i;
	int j;

	x_max = info[0];
	y_max = info[1];
	posit = info[2];
	x_rel = info[3];
	y_rel = info[4];
	empty = info[5];

	if ((x_rel + *q - 1) <= x_max && (y_rel + *q - 1) <= y_max && *q > 1)
	{	
		i = 0;
		while (arr[posit + ((*q - 1) * x_max) + i] == empty && i < *q)
			i++;
		j = 0;
		while (arr[((posit + *q - 1) + j)] == empty && (j / x_max) < *q)
			j = j + x_max;
		if (*q != i || *q != (j/x_max))
			return*(q - 1);
		if (i == *q && (j/x_max) == *q)
		{
			if (*bigsqr < *q)
				{*bigsqr = *q;}
			recurse_squarecalc(info, arr, bigsqr, q + 1);
		}
		else 
			return (*q);
	}
	return 0;
}

void bsqcheck(char *prop, char *arr, int x, int y) // prop[3]: 0=field_char, 1=obstacle_char, 2=fill_char.		arr = map/array, 		x=linelength,		y=amount of lines.
{
	int i;
	int bigsqr;
	int info[6];
	int xi_rel;
	int yi_rel;
	int result;
	int *q;

	info[0] = x;
	info[1] = y;
	info[5] = prop[0];
	bigsqr = 0;

	printf("x_max: 		y_max:	 	position i: 	x_relative:	y_relative:	empty_char:\n");
	i = 0;
	while (arr[i] != '\0' && i < (x*y))
	{
		// printf("%i		%i		s%i		%c:\n", info[0], info[1], info[2], arr[info[2]]);
		xi_rel = i % x;
		yi_rel = i / x;
		*q = 2;
		if (arr[i] == prop[0] && xi_rel < (x - bigsqr) && yi_rel < (y - bigsqr) && i < 10) 
		{
			info[2] = i;
			info[3] = xi_rel;
			info[4] = yi_rel;
			result = recurse_squarecalc(info, arr, &bigsqr, q);
			// printf("%i %i \n", i, result);
			// printf("%i \n", result);
			if (result > bigsqr)
			{
				bigsqr = result;
			}
			i++;
		}
		else 
			i++;
	}
}

int main(void)
{
	// char array[] = {46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0};
	char array[] = {46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 10, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 111, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 10, 0};
	char prop[] = ".ox";
	bsqcheck(prop, array, 28, 9);
	return 0;
}