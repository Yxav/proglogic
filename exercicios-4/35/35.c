#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1,n2,n3,media, total_media;

    printf("Digite as 3 notas e a media dos exercicios\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &media);

    total_media = (n1+(n2*2)+(n3*3) + media) / 7;


    if (total_media < 9){
        if(total_media >= 6 && total_media<7.5){ 
            printf("C\n");
        } else {
            if(total_media<6){
                printf("D\n");
            } else {
                printf("B\n");
            }
        }
    } else {
        printf("A\n");
    }

    return 0;
}
