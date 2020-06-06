#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float x1,y1,x2,y2, point;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    
    point = sqrt((pow((x2-x1),2)) + (pow((y2-y1),2))); 
    printf("%.4f\n", point);
    return 0;
}
