#include <stdio.h>

int main(int argc, char const *argv[])
{
	int value;

	printf("Por favor, insira o valor:\n");
	scanf("%d", &value);

	if (value > 10) {
		printf("Eh maior que 10!\n");
	} else {
		printf("NAO eh maior que 10 \n");
	}
	return 0;
}


 