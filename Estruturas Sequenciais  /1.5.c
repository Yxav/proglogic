#include <stdio.h>

int main(int argc, char const *argv[])
{
	int salario, percentual;

	printf("Insira o salario e o percentual\n");
	scanf("%d %d", &salario, &percentual);

	salario += salario * 0.15;

	printf("Salario: R$%d\n", salario); 

	return 0;
}