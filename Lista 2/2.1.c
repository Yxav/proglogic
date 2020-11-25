#include <stdio.h>

int main(int argc, char const *argv[])
{

	float media = 0, first_test=0, second_test=0;


	printf("Insira a primeira nota da avaliacao:\n");
	scanf("%f", &first_test);
	
	printf("Insira a segunda nota da avaliacao:\n");
	scanf("%f", &second_test);
	
	media = (first_test + second_test) /2;
	
	printf("Sua média é %.1f\n", media);

	if (media >= 6){

		printf("PARABÉNS!! Você foi aprovado\n\n");

	}


	return 0;
}	