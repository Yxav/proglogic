#include <stdio.h>

int main(int argc, char const *argv[])
{
    float l1,l2,l3;

    printf("Digite o valor dos 3 lados do triangulo\n");
    scanf("%f %f %f", &l1, &l2, &l3);

    if(l1==l2 && l2 == l3){
        printf("Equilatero\n");
    } else {
        if(l1 == l2 || l2 == l3 || l1 == l3) {
            printf("Isoceles\n");
        } else {
            printf("Escaleno\n");
        }
    }
    return 0;
}
