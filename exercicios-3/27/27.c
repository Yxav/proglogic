#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("Digite os valores A, B e C:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a==1){
        printf("Morango\n");
        if (b==1)
        {
            if (c==1)
            {
                printf("Pera\n");
            } else{
                printf("Abacate\n");
            }
        }
    }
    
    printf("Limao\n");

    return 0;
}
