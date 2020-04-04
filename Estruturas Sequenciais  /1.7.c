#include <stdio.h>

int main(int argc, char const *argv[])
{
	int temp, f;

	printf("Insira a temperatura em Celsius\n");
	scanf("%d", &temp);

	f = ((temp/5)*9 + 32);

	printf("%d\n",f ); 
	


	return 0;
}