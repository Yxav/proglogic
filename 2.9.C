#include <stdio.h>

int main(int argc, char const *argv[])
{
	int op;
	float height,p;

	printf("Insira a altura:\n");
	scanf("%f", &height);

	printf("Insira a opção\n 1 - Feminino\n 2 - Masculino\n");
	scanf("%d", &op);

	if (op==1){
		p = (62.1 * height)-44.7;
	}

	if (op==2){
		p = (72.7 * height)-58;
	}

	printf("O peso ideal e: %.2f\n", p );

	return 0;
}