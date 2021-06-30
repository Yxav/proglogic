#include <stdio.h>

int main(int argc, char const *argv[])
{
	int R[5], X[10], points=0;

	printf("Insira o gabarito da Loto: \n");
	for (int index = 0; index < 5; ++index){
		scanf("%d", &R[index]);
	}
	printf("Insira a sua aposta: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &X[index]);
	}
	
	for (int index = 0; index < 5; ++index){
		for(int index1 = 0; index1 < 10; ++index1){
			if(R[index] == X[index1]){
				points++;
			}
		}
	}

	printf("Pontos %d \n", points);


	return 0;
}