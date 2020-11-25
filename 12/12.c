#include <stdio.h>

int main(int argc, char const *argv[])
{
	int value;

	printf("Por favor, insira o valor:\n");
	scanf("%d", &value);

	if (value >= 0) {
		printf("Eh positivo!\n");
	} else {
		printf("Negativo \n");
	}
	return 0;
}


 