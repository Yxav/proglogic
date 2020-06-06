#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salary, new_salary,percentual;

    scanf("%f", &salary);

    if (salary > 0) {
        if (salary <= 400){
            percentual = 15;
        }
        if (salary > 400)
        {
            percentual = 12;
        }
        if (salary > 800)
        {
            percentual = 10;
        }
        if (salary > 1200)
        {
            percentual = 7;
        }
        if (salary > 2000)
        {
            percentual = 10;
        }
    }

    new_salary = ((percentual/100) * salary) + salary;
    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n", new_salary - salary);
    printf("Em percentual: %.0f %%\n", percentual);


    return 0;
}
