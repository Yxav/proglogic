#include <stdio.h>

int main(int argc, char const *argv[])
{
    int option, quantity;
    float total;

    scanf("%d %d", &option, &quantity);

    switch (option)
    {
    case 1:
        total = quantity * 4.00;
        printf("Total : R$ %.2f\n", total);
        break;
    case 2:
        total = quantity * 4.50;
        printf("Total : R$ %.2f\n", total);
        break;
    case 3:
        total = quantity * 5.00;
        printf("Total : R$ %.2f\n", total);
        break;
    case 4:
        total = quantity * 2.00;
        printf("Total : R$ %.2f\n", total);
        break;
    case 5:
        total = quantity * 1.50;
        printf("Total : R$ %.2f\n", total);
        break;
    }

    return 0;
}
