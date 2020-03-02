#include <stdio.h>

int main(int argc, char const *argv[])
{

	int year;

	printf("Insira o ano de nascimento aqui\n");
	scanf("%d", &year);

	year = 2020 - year;

	printf("%d\n", year );

	if (year<16 ){
		printf("Não pode votar\n");
	}
	
	if (year >= 16 ){
	printf("Pode votar\n");
	
	return 0;
}
}