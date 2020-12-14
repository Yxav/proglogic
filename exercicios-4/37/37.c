#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salary, sales_amount, total_salary;

    printf("Digite o salario e o valor das vendas efetuadas:\n");
    scanf("%f %f", &salary, &sales_amount);

    if (sales_amount >= 1500) {
        total_salary = salary + ((sales_amount - 1500) * 0.5) + (sales_amount*0.3);
    } else {
        total_salary = salary + (sales_amount * 0.3);
    }

    printf("R$%.2f\n\n", total_salary);

    return 0;
}

