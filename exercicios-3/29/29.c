#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,d,e;

    printf("Digite os valores A, B, C, D, E:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a==1){
        printf("Amarelo\n");
        if (b==1) {
            printf("Azul\n");
        }
        printf("Preto\n");
        if (d==1){
            printf("Verde\n");
        } else {
            printf("Violeta\n");
        }
    } else {
        if(c==1){
            printf("Vermelho\n");
            }
        if(e==1){
            printf("Laranja\nCinza\n");
        }
    }

    printf("Branco\n");

    return 0;
}
