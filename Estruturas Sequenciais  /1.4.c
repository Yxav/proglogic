#include <stdio.h>

int main(int argc, char const *argv[])
{
	float horas, valor_h, filhos, salario;

	printf("Insira as horas trabalhadas, valor por hora\n");
	scanf("%f %f", &horas, &valor_h );
	
	printf("Agora, insira a quantidade de filhos menor que 14 anos\n");
	scanf("%f", &filhos );
	
	salario = horas * valor_h;

	if(filhos){
		salario += (salario * (0.02 * filhos));
	}

	printf("%.2f\n", salario);
	
	 return 0;
}