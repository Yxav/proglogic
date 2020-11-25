#include <stdio.h>

int main(int argc, char const *argv[])
{
	 float kminit, kmend, litros, money, media, lucro;

	 printf("Insira o Km inicial, o Km final, a qntd de litros do tanque de gasolina e o valor recebido ($)\n");
	 scanf("%f %f %f %f", &kminit, &kmend, &litros, &money);

	 media = ((kmend - kminit) / litros);
	 lucro = (money - (litros * 2.5));

	 printf("Media :%0.fKm/L\nLucro:R$ %.2f\n\n", media, lucro );


	return 0;
}