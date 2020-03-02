#include <stdio.h>

int main(int argc, char const *argv[])
{
	int value;

	printf("Insira o valor: \n");
	scanf("%d", &value);

	if(value % 2 == 0){

		printf("O valor é par\n");
	}

	if(value % 2 == 1){

		printf("O valor é ímpar\n");
	}

	return 0;
}