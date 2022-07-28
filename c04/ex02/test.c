#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a;
	int b;
	int mod;

	a = 23;
	b = 5;

	mod = a % b;

	printf("%i \n",  mod);
	return 0;

}