#include <stdio.h>

int main(int argc, char const *argv[])
{
	float qtnd, price;

	printf("Insira a quantidade maças:\n");
	scanf("%f", &qtnd);

	if(qtnd<12){
		price = qtnd * 0.3;
	}

	if(qtnd>=12){
		price = qtnd * 0.25;
	}

	printf("Valor da compra R$: %.2f\n", price);


	return 0;
}