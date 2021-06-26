#include <stdio.h>

int main(int argc, char const *argv[])
{
	int D[10], E[10];

	printf("Insira o valor do vetor: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &D[index]);
	}
	for (int index = 0; index < 10; ++index){
		E[index] = D[index];
	}

	for (int index = 0; index < 10; ++index){
		printf("%d ", D[index]);
	}
	printf("\n");
	for (int index = 0; index < 10; ++index){
		printf("%d ", E[index]);
	}
	return 0;
}