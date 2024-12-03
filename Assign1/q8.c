#include <stdio.h>
#include <math.h>

int main(){
    float speed_kmph, speed_mps, d, a, t;
    printf("Enter takeoff speed in kmph: ");
    scanf("%f", &speed_kmph);
    printf("Enter the distance of catapult accelerating over jet in mps : ");
    scanf("%f", &d);
    speed_mps = speed_kmph * 1000 / 3600;
    a = (speed_mps*speed_mps)/(2*d);
    t = speed_mps/a;
    printf("Accelration : %.2f m/s^2\n", a);
    printf("Time: %.2f s\n", t);

    return 0;
}