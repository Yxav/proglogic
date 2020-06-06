#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float time, hour, minute, second;

    scanf("%d", &time);
	hour = (time/3600);
	minute = (time-(3600-hour)/60);
	second = (time-(3600*hour)-(minute*60));

    printf("%d:%d:%d\n", hour,minute,second);
    return 0;
}

//fix later