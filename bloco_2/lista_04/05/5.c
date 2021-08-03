#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checkApproved(float value1, float value2, float frequencyPercent);


int main(int argc, char const *argv[])
{
    float value1=0, value2=0,frequencyPercent=0;

    printf("Insira as notas e a frequencia\n");
    scanf("%f %f %f", &value1, &value2, &frequencyPercent);
    checkApproved(value1, value2, frequencyPercent);
}


void checkApproved(float value1, float value2, float frequencyPercent){
    float average = (value1 + value2) / 2;
    if(average >= 7 && frequencyPercent >= 75){
        printf("Media: %2.f Aprovado\n", average);
    } else {
        printf("Reprovado\n");
    }
}