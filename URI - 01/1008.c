#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, hours;
    float price_hours, salary;

    scanf("%d %d ", &number, &hours);
    scanf("%f" , &price_hours);
        
    salary = hours * price_hours;
    

    printf("NUMBER = %d\n", number);
    printf("SALARY = %.2f\n", salary);

    return 0;
}
