#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("Digite os valores de A, B e C\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        if(a>c){
            printf("%d\n", a);
        } else {
            printf("%d\n", c);
        }
    } else {
        if (b>c) {
            printf("%d\n", b);
        } else {
            printf("%d\n", c);
        }

        
    }
    return 0;
}
