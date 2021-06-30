#include <stdio.h>

int main(int argc, char const *argv[])
{
	int U[10], aux=0, count=9;

	printf("Insira o valor do vetor: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &U[index]);
	}
	for (int index = 0; index < 10; ++index){
		if (index < 5) {
			aux = U[index];
			U[index] = U[count];
			U[count] = aux;
			count--;
		}
	}

	for (int index = 0; index < 10; ++index){
		printf("%d ", U[index]);
	}


	return 0;
}