#include <stdio.h>

int main(int argc, char const *argv[])
{
	int pass;

	printf("Insira a senha aqui\n");
	scanf("%d", &pass);

	if (pass == 1234){

		printf("ACESSO PERMITIDO\n");
	}
	else{

		printf("ACESSO NEGADO\n");

	}	

	return 0;
}