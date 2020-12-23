#include <stdio.h>

int main(int argc, char const *argv[])
{
	int quantity;
	float total;

	printf("Insira a quantidade de macas compradas:\n");
	scanf("%d", &quantity);

	if(quantity >= 12){
		total = quantity * 0.25;
	} else {
		total = quantity * 0.3;
	}

	printf("R$ %.2f \n", total);
	return 0;
}