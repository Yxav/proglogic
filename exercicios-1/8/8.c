#include <stdio.h>

int main(int argc, char const *argv[])
{
	float price, promo_price;

	printf("Por favor, insira o preco inicial:\n\n");
	scanf("%f", &price);

	promo_price = price - (price * 0.3);

	printf("R$ %.2f \n\n", promo_price);

	return 0;
}
