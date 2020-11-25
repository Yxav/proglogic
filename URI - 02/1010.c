#include <stdio.h>

int main(int argc, char const *argv[])
{
    int code,quantity,code1,quantity1;
    float price,price1,total;

    scanf("%d %d %f", &code, &quantity, &price);
    scanf("%d %d %f", &code1, &quantity1, &price1);
    
    total = (price * quantity) + (price1 * quantity1);
    printf("VALOR A PAGAR:%.2f\n", total);
    return 0;
}
