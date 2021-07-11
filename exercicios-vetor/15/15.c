#include <stdio.h>

int main(int argc, char const *argv[])
{
	int S[10], aux=0;
	printf("Insira o valor do vetor: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &S[index]);
	}
	for (int index = 0; index < 5; ++index){
			aux = S[index];
			S[index] = S[10 -(index+1)];
			S[10 -(index+1)] = aux;
	}

	for (int index = 0; index < 10; ++index){
		printf("%d ", S[index]);
	}


	return 0;
}