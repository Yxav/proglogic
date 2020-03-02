#include <stdio.h>

int main(int argc, char const *argv[])
{

	int value = 0;

	printf("Insira o valor aqui: ");
	scanf("%i", &value);

	if (value >= 0){
		printf("Positivo\n");
	}

	if (value < 0){
		printf("Negativo\n");
	}		
	

	return 0;
}
