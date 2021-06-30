#include <stdio.h>

int main(int argc, char const *argv[])
{
	int M[10], aux=0;

	printf("Insira o valor do vetor: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &M[index]);
	}
	for (int index = 0; index < 10; ++index){
		if (index < 5) {
			aux = M[index];
			M[index] = M[index + 5];
			M[index + 5] = aux;
		}
	}

	for (int index = 0; index < 10; ++index){
		printf("%d ", M[index]);
	}


	return 0;
}