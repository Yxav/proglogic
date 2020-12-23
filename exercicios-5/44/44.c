#include <stdio.h>

int main(int argc, char const *argv[])
{
    float v1, v2;

    printf("Digite o primeiro valor\n");
    scanf("%f", &v1);

    printf("Digite o segundo valor\n");
    scanf("%f", &v2);

    while (v2 == 0){
        printf("Digite o segundo valor\n");
        scanf("%f", &v2);
    }

    printf("A divisao do primeiro valor pelo segundo eh: %.2f\n\n", v1/v2);

    return 0;
}
