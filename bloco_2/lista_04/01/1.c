#include <stdio.h>

void mathResult(float value1, float value2, float value3);


int main(int argc, char const *argv[])
{
	float value1=0, value2=0, value3=0;

	printf("Insira 3 valores\n");
	scanf("%f %f %f", &value1, &value2, &value3);
	mathResult(value1, value2, value3);
}


void mathResult(float value1, float value2, float value3){
	printf("%.2f", (value1 * value1) + value2 + value3);

}