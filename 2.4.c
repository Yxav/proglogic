#include <stdio.h>

int main(int argc, char const *argv[])
{

	int value1, value2;

	printf("Insira o primeiro valor aqui: ");
	scanf("%i", &value1);

	printf("Insira o segundo valor aqui: ");
	scanf("%i", &value2);

	if (value1>value2){

		printf("%d\n", value1);
	}

	else {

		printf("%d\n", value2);

	}


	
	return 0;
}
