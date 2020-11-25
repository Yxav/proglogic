#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salary, tax;

    scanf("%f", &salary);

    if (0.00 < salary <= 2000.00){
        printf("Isento\n");
    }
    //
    if(salary>4500.00){
    tax = ((28/100) * salary) + salary;
    printf("R$: %.2f\n", tax);
    }
    return 0;
}
