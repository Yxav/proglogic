#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float ma, mh, mg, a,b,c;

	printf("Insira os valores de a,b,c respectivamente!! \n");
	scanf("%f %f %f", &a,&b,&c);

	ma = ((a+b+c)/3);
	mh = 3/((1/a)+(1/b)+(1/c));
	mg = cbrt(a+b+c);

	printf("Os valores sao:\n Media Aritmetica: %f\n Media Harmonica: %f\n Media Geometrica: %f\n\n", ma, mh, mg);

	return 0;
}