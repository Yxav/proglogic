#include <stdio.h>

int main(int argc, char const *argv[])
{
    float kg_maca, kg_morango, total_kg, total_morango, total_maca, total_frutas;

    printf("Digite a quantidade de KG comprados de maca e morangos:\n");
    scanf("%f %f", &kg_maca, &kg_morango);

    total_kg = kg_maca + kg_morango;

    if(total_kg >= 5){
        total_morango = 4.00 * kg_morango;
        total_maca = 2.00 * kg_maca;
    } else {
        total_morango = 5.00 * kg_morango;
        total_maca = 3.00 * kg_maca;
    }
    total_frutas = total_morango + total_maca;

    if (total_kg > 8 || total_frutas > 50){
        total_frutas -= total_frutas * 0.2;
    }

    printf("Total a ser pago: RS%.2f\n", total_frutas);
    return 0;
}
    