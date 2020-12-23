#include <stdio.h>

int main(int argc, char const *argv[])
{
	int pass;

	printf("Por favor, insira a senha:\n");
	scanf("%d", &pass);

	if (pass == 268474) {
		printf("ACESSO PERMITIDO!\n");
	} else {
		printf("ACESSO NEGADO \n");
	}
	return 0;
}


 