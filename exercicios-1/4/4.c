#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float r, area;

	printf("Digite o valor do raio: \n\n");
	scanf("%f", &r);

	area = M_PI * (r * r);

	printf("%.2f m² \n\n", area);

	return 0;
}