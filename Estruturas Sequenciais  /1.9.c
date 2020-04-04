#include <stdio.h>

int main(int argc, char const *argv[])
{
	float eleitores, vb, vn, vv;


	printf("Insira o valor de eleitores\n");
	scanf("%f", &eleitores);

	printf("Insira o valor de votos brancos, nulos, válidos\n");

	scanf("%f %f %f", &vb, &vn, &vv);

		vb = (vb/eleitores) * 100; 
		vn = (vn/eleitores) * 100; 
		vv = (vv/eleitores) * 100; 
	 printf("Votos Brancos:%.0f\n Votos Nulos:%.0f\n Votos Validos:%.0f\n", vb, vn ,vv );




	return 0;
}