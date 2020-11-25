#include <stdio.h>

int main(int argc, char const *argv[])
{
	int year;

	printf("Por favor, insira o ano de nascimento:\n");
	scanf("%d", &year);

	if ((2020 - year) >= 16) {
		printf("Voce pode votar!\n");
	} else {
		printf("Voce nao pode votar \n");
	}
	return 0;
}


 