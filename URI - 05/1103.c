#include <stdio.h>

int main(int argc, char const *argv[])
{
    int h1,h2,h3,h4, m1,m2, mt, wake_time, sleep_time;

    // scanf("%d %d %d %d", &h1, &h2, &h3,&h4);
    
do {
    scanf("%d %d %d %d", &h1, &h2, &h3,&h4);

    if(h1==0){
        h1 = 24;
    }

    if(h3==0){
        h3 = 24;
    }


    m1 = h1 * 60;
    m2 = h3 * 60;


    wake_time = m1 + h2;
    sleep_time = m2 + h4;

    if (wake_time > sleep_time){
        mt = wake_time - sleep_time;
    }
    else {
        mt = sleep_time - wake_time;
    }

    if(h1==h3 && mt) {
        mt =1440 - mt;
    }
    printf ("%d\n", mt);
    }
while(h1!=0 && h2!=0 && h3!=0 && h4!=0);





    return 0;
}
