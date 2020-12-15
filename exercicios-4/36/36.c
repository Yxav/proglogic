#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;

    printf("Digite a idade:\n");
    scanf("%d", &age);

    if(age<18){
        if(age>=5 && age <=7){
            printf("Infantil A\n");
        } else {
            if(age>=8 && age <=10){
                printf("Infantil B\n");
            } else {
                if(age>=11 && age <= 13){
                    printf("Juvenil A\n");
                } else {
                    printf("Juvenil B\n");
                    
                }
            }
        }
    }else {
        printf("Senior\n");
    }


    return 0;
}
