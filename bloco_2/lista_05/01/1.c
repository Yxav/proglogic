#include <stdio.h>
#include <math.h>

float potencia(float base, int expoente);


int main(int argc, char const *argv[])
{
	float value=0, result=0;
	int exp = 0;

	printf("Insira o valor da base e expoente\n");
	scanf("%f %d", &value, &exp);
	result = potencia(value, exp);

printf("O resultado e: %.1f\n\n", result);
}


float potencia(float base, int expoente) {
	return pow(base, expoente);
}