#include <stdio.h>

int main(int argc, char const *argv[])
{
	float comp, lar, alt, caixas, vol;

	printf("Insira o comprimento, largura e altura\n");
	scanf("%f %f %f", &comp,&lar,&alt);


	vol = comp * lar * alt;
	caixas = vol / 1.5;

	printf("Serão necessarias %.1f caixas\n", caixas);

	return 0;
}