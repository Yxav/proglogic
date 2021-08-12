#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float averageCalc(float value1, float value2, float value3, char option);
float higherValue(float value1, float value2, float value3);

int main(int argc, char const *argv[])
{
	float value1=0, value2=0, value3=0, result=0;
	char option;

	printf("Insira a primeira nota\n");
	scanf("%f", &value1);

	while(value1 < 0 || value1 > 10) {
		printf("Insira a primeira nota\n");
		scanf("%f", &value1);		
	}
	printf("Insira a segunda nota\n");
	scanf("%f", &value2);

	while(value2 < 0 || value2 > 10) {
		printf("Insira a primeira nota\n");
		scanf("%f", &value2);		
	}
	printf("Insira a terceira nota\n");
	scanf("%f", &value3);

	while(value3 < 0 || value3 > 10) {
		printf("Insira a primeira nota\n");
		scanf("%f", &value3);		
	}

	printf("Agora, insira a opcao desejada\n");
	printf("A - Media aritmetica\nP - Media ponderada\nM - Maior nota\n");
	setbuf(stdin, NULL);
	scanf("%c", &option);	

	
	result =  averageCalc(value1, value2, value3, option);
	printf("O resultado eh: %.2f\n\n", result);
}


float averageCalc(float value1, float value2, float value3, char option){
	if(toupper(option) == 'A'){
		return (value1+value2+value3) / 3;
	} 
		else if (toupper(option) == 'P') {
			return ((value1 * 5) + (value2 * 3) + (value3 * 2)) / 10;
		}
		else if (toupper(option) == 'M') {
			return higherValue(value1, value2, value3);
		}
}

float higherValue(float value1, float value2, float value3){
	float higher=0;

	if(value1 > value2){
		if(value1 > value3) return value1;
		else return value2;
	} else {
		if (value2>value3) return value2;
		else return value3;
	}


}