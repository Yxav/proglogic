#include <stdio.h>

int main(int argc, char const *argv[])
{
    float l1,l2,l3;

    printf("Digite o valor dos 3 angulos do triangulo\n");
    scanf("%f %f %f", &l1, &l2, &l3);

    if(l1==90 || l2 == 90 || l3 ==90){
        printf("Retangulo\n");
    } else {
        if(l1>90 || l2 > 90 || l3 > 90){
            printf("Obtusangulo\n");
        } else {
            if(l1 < 90 && l2 < 90 && l3 < 90){
                printf("Acutangulo\n");
            }
        }
    }

    return 0;
}
