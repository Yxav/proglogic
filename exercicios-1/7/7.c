	#include <stdio.h>

int main(int argc, char const *argv[])
{
	float c, f;

	printf("Digite a temperatura em Celsius:\n\n");
	scanf("%f", &c);

	f = ((c / 5) * 9) + 32;

	printf("%.2f ºC\n\n", f);

	return 0;
}