#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("Digite os valores A, B e C:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a==1){
        printf("Verde\n");
    } else {
        if (b==2){
            if(c==3){
                printf("IFSUL\n");
            } else {
                printf("Uva\nPera\n");
            }
        } else{
            printf("Preto\n");
        }
    }

    printf("Violeta\n");

    return 0;
}
