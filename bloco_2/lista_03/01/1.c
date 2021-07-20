#include <stdio.h>

#define MAX_MATRIX 5


int main(int argc, char const *argv[])
{
	int M[5][5], lineFour=0,colTwo=0,mainDiagonal=0,secondDiagonal=0,totalSum=0;



	printf("Insira o valor da matriz abaixo\n");
	for (int line = 0; line < MAX_MATRIX; ++line)
	{
		for (int column = 0; column < MAX_MATRIX; ++column)
		{
			scanf("%d", &M[line][column]);
		}
	}

	// sum line 4 

	for (int index = 0; index < MAX_MATRIX; ++index)
	{
		lineFour += M[3][index];
	}

	// sum column 2

	for (int index = 0; index < MAX_MATRIX; ++index)
	{
		colTwo += M[index][1];
	}

	// sum main diagonal
	for (int index = 0; index < MAX_MATRIX; ++index)
	{
		mainDiagonal += M[index][index];
			
	}

	// sum second diagonal
	for (int index = 0; index < MAX_MATRIX; ++index)
	{
		secondDiagonal += M[index][MAX_MATRIX - 1 - index];
			
	}

	// total sum

	for (int column = 0; column < MAX_MATRIX; ++column)
	{
		for (int line = 0; line < MAX_MATRIX; ++line)
		{
			totalSum += M[column][line];
		}
	}

	printf("----------------SOMAS------------------------\n");
	printf("| Soma da linha 4 = %d                      \n", lineFour);
	printf("| Soma da coluna 2 = %d 				    \n", colTwo);
	printf("| Soma da diagonal principal = %d           \n", mainDiagonal);
	printf("| Soma da diagonal secundaria = %d          \n", secondDiagonal);
	printf("| Soma de todos os elementos da matriz = %d \n", totalSum);
	printf("---------------------------------------------\n");

	return 0;
}