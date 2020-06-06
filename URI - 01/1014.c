#include <stdio.h>

int main(int argc, char const *argv[])
{
    int distancy;
    float gas_consume, consume_per_litre;

    scanf("%d", &distancy);
    scanf("%f" , &gas_consume);
        
    consume_per_litre = distancy / gas_consume;
    
    printf("%.3f km/l\n", consume_per_litre);

    return 0;
}
