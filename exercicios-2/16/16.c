#include <stdio.h>

int main(int argc, char const *argv[])
{
	int option;
	float h, imc;

	printf("Por favor, insira a opcao desejada:\n1 - Homem\n2 - Mulheres\n");
	scanf("%d", &option );

	printf("Agora, insira a sua altura\n");
	scanf("%f", &h);


	if (option == 1) {
		imc = (72 * h) - 58;
	} else {
		imc = (62.1 * h) - 44.7;
	}

	printf("Seu peso ideal eh %.2f Kg\n", imc);
	return 0;
}


 
