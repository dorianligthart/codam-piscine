#include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	int a;
// 	int b;
// 	int i;
// 	int mod;
// 	int div;


// 	while (i < 243)
// 	{
// 		a = 28;
// 		b = 9;
// 		div = i / a;
// 		mod = i % a;
// 		printf("%i,		m: %i,		d: %i\n", i, mod, div);
// 		i++;
// 	}
// 	return 0;
// }


int fun1(n)
{
	printf("the result is \n");
	if (n > 0)
	{
		return fun1(n-1);
	}
	return 0;
}

int main(void)
{
	printf("%i ",fun1(2));
	return 0;
}