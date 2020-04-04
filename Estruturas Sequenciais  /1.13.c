#include <stdio.h>

int main(int argc, char const *argv[])
{
	float comprimentoPista, numeroVoltas, n_litros, reabastecimentos, consumoCombustivel, totalPercurso;


	printf("Insira o comprimento da pista, o numero de voltas, o numero de reabastecimentos desejados e o consumo de combustivel do automovel:\n");
	scanf("%f %f %f %f", &comprimentoPista, &numeroVoltas, &reabastecimentos, &consumoCombustivel);

	totalPercurso = (comprimentoPista / 1000) * numeroVoltas;
	reabastecimentos = totalPercurso / (reabastecimentos + 1);
	n_litros = reabastecimentos / consumoCombustivel;

	printf("Litros necessarios: %.2f\n", n_litros );



	return 0;
}