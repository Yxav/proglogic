#include <stdio.h>

int main(int argc, char const *argv[])
{
	int Q[10], high=0, position=0;

	printf("Insira o valor do vetor: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &Q[index]);
		while(Q[index]<0){
			printf("Somente valores positivos: \n");
			scanf("%d", &Q[index]);
		}
	}
	high = Q[0];
	for (int index = 0; index < 10; ++index){
		if(Q[index] > high){
			high = Q[index];
			position = index;
		}
	}

	printf("Maior valor:%d na posição %d do vetor Q\n", high, position);


	return 0;
}