#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,aux;

    printf("Digite os valores de A, B e C\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a<b+c){
        if (b<a+c){
            if (c<a+b){
            printf("Forma um triangulo\n");
            } else{
                printf("Nao forma um triangulo\n");
            } 
        } else {
            printf("Nao forma um triangulo\n");
            }   
    } else {
        printf("Nao forma um triangulo\n");
    }


    return 0;
}
