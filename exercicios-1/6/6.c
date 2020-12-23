#include <stdio.h>

int main(int argc, char const *argv[])
{
	float c, f;

	printf("Digite a temperatura em Fahrenheit:\n\n");
	scanf("%f", &f);

	c = ((f-32) / 9) * 5;

	printf("%.2f ºC\n\n", c);

	return 0;
}