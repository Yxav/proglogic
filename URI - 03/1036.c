#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a,b,c,r1,r2, delta;
    
    scanf("%f %f %f", &a, &b ,&c);

    delta = (b * b) - 4 * a * c;
    r1 = (-b + sqrt(delta)) / (2 * a);
    r2 = (-b - sqrt(delta)) / (2 * a);
    
    if (delta < 0) {
        printf("Impossível calcular\n");
    }
    
    if (a == 0) {
        printf("Impossível calcular\n");
    }
    
    else{

    printf("R1 = %.5f\nR2 = %.5f\n", r1,r2);
    }


    return 0;

    
}
