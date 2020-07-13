#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a,b=0,c=0,media; 


    while(1){
    
    if (c==2){
        break;
    }

    scanf("%f", &a);

    if(a>=0 && a<=10){
        c++;
        b += a;
    }
    else 
        printf("Nota Invalida\n");
    }

    media = b/2;

    printf("media = %.2f\n", media);

        
    




    return 0;
}
