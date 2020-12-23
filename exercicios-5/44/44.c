#include <stdio.h>

int main(int argc, char const *argv[])
{
    float v1, v2;

    printf("Digite o primeiro valor\n");
    scanf("%f", &v1);

    do{
        printf("Digite o segundo valor\n");
        scanf("%f", &v2);
        if (v2 == 0){
            printf("Valor invalido\n");
        }
        
    } while (v2==0);

    printf("A divisao do primeiro valor pelo segundo eh: %.2f\n\n", v1/v2);

    return 0;
}
