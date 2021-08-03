#include <stdio.h>

#define MAX_MATRIX 3


int main(int argc, char const *argv[])
{
	int M[MAX_MATRIX][MAX_MATRIX];



	printf("Insira o valor da matriz abaixo\n");
	for (int line = 0; line < MAX_MATRIX; ++line)
	{
		for (int column = 0; column < MAX_MATRIX; ++column)
		{
			scanf("%d", &M[line][column]);
		}
	}

	for (int line = 0; line < MAX_MATRIX; ++line)
	{
		for (int column = 0; column < MAX_MATRIX; ++column)
		{
			if(line != column) {
				printf("%d ",M[line][column]);
			}
		}
		printf("\n");
	}

	return 0;
}