#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num_sides;
    float size_side, result;

    // result é a variável que servirá pra calcular área, ou perímetro, de acordo com a tomada de decisão do if;

    printf("Digite o numero de lados do poligono:\n");
    scanf("%d", &num_sides);
    
    printf("Digite a medida de lados:\n");
    scanf("%f", &size_side);

    if (num_sides < 4){
        if (num_sides == 3) {
            result = 3 * size_side;
            printf("TRIANGULO\nPerimetro:%2.f\n", result);
        } else {
            printf("NAO EH UM POLIGONO\n");
        }
    } else {
        if (num_sides == 4){
            result = size_side * size_side;
            printf("QUADRADO\nArea: %2.f\n", result);
        } else {
            if (num_sides == 5){
                printf("PENTAGONO\n");
            } else {
                printf("POLIGONO NAO IDENTIFICADO\n");
            }

        }
    }

    return 0;
}
