#include <stdio.h>

int main(int argc, char const *argv[])
{
	int X[10], R[10],count=0;

	printf("Insira o valor do vetor: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &X[index]);
		if(X[index] < 0) {
			R[count] = X[index];
			count++;
		}
	}

	for (int index = 0; index < count; ++index){
		printf("%d ", R[index]);
	}


	return 0;
}