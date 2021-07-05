#include <stdio.h>

int main(int argc, char const *argv[])
{
	int S[10], R[5], X[15],count=0;

	printf("Insira o valor do vetor: \n");
	for (int index = 0; index < 5; ++index){
		scanf("%d", &R[index]);
	}

	printf("Insira o valor do outro vetor: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &S[index]);
	}

	for (int index = 0; index < 15; ++index){
		if(index<5) {
			X[index] = R[index];
		} else {
			X[index] = S[count];
			count++;
		}
	}

	for (int index = 0; index < 15; ++index){
		printf("%d ", X[index]);
	}

	return 0;
}