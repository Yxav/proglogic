#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a=10,b=20,c=0;

	c = a;
	a = b;
	b = c;

	printf("%d %d", a,b);

	return 0;
}