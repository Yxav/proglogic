#include <stdio.h>

int main(int argc, char const *argv[])
{
	float aprod, reproc, reprovados, reprovadosd, total;


	printf("Insira a quantidade de reprovados na turma C e aprovados na turma D:\n");
	scanf("%f %f", &reproc, &aprod);

	reprovados = (60 * reproc) / 100;
	reprovadosd = ( 20 - (20 * aprod)/ 100); 

	total = ((reprovados + reprovadosd ) / 80) * 100;

	printf("Reprovados na turma C: %.0f\n Reprovados na turma D: %.0f\nPercentual de reprovação: %.2f\n\n",reprovados, reprovadosd, total );

	return 0;
}