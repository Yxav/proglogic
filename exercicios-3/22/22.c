#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1,n2, media;

    printf("Digite o valor da nota 1\n");
    scanf("%f", &n1);

    printf("Digite o valor da nota 2\n");
    scanf("%f", &n2);

    media = (n1+n2)/2;

    if (media >= 6){
        printf("APROVADO\n");
    } else {
        if (media < 3) {
            printf("REPROVADO\n");
        } else {
            printf("EXAME\n");
        }
        
    }
    
    printf("Media: %.2f\n", media);

    return 0;
}
