#include <stdio.h>
#include <unistd.h>

int main (void)
{
	char ch;
	int i;
	int x;
	char str[10];
	i = 0;
	char buf[1];
	while(read(0, buf, sizeof(buf)) > 0 && i < 10) 
	{
		str[i] = buf[0];
		str[i+1] = '\0';
		i++;
	}
	printf("%s\n", str);
	return 0;
}
