#include <stdio.h>

int main(int argc, char const *argv[])
{
	float n1, n2, media;

	printf("Por favor, insira as notas das provas:\n\n");
	scanf("%f %f", &n1, &n2);


	media = (n1 + n2) / 2;

	if (media > 6) {
		printf("PARABENS! Você foi aprovado!\n");
	}
	else {
		printf("Voce foi REPROVADO! Estude mais \n\n");
	}

	printf("%.2f \n\n", media);

	return 0;
}


 