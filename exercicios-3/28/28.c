#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("Digite os valores A, B e C:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a==1){
        if(b==1){
            printf("A\nB\n");
        }
    }
    
    printf("C\n");

    if(c==1){
        printf("D\nE\n");
    } else {
        printf("F\n");
    }

    return 0;
}
