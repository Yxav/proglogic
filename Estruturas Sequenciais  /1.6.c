#include <stdio.h>

int main(int argc, char const *argv[])
{
	int temp, c;

	printf("Insira a temperatura em Fahrenheit\n");
	scanf("%d", &temp);

	c = (temp-32)*5/9;

	printf("%d\n",c ); 
	


	return 0;
}