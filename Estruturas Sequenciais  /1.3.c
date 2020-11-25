#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float a,b,c, at, aq, ar,ac;

	printf("Insira os valores A,B e C\n");
	scanf("%f %f %f", &a, &b, &c);

	at = (a * b)/2;
	aq = pow(b, 2);
	ar = a*b;
	ac = 3.14 * (pow(c,2));

	printf("Area do triangulo: %.2f\nArea do quadrado: %.2f\nArea do retangulo: %.2f\nArea do circulo: %.2f\n",at,aq,ar,ac);

	return 0;
}