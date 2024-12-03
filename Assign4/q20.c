#include <stdio.h>
void sum_n_avg(double one, double two, double three, double *sum_of_3, double *avg_of_3);
int main(){
    double one, two, three, sum_of_3, avg_of_3;
    printf("Enter three numbers : ");
    scanf("%f\t%f\t%f", &one, &two, &three);
    sum_n_avg(one, two, three, &sum_of_3, &avg_of_3);
    printf("Sum & Average : %.2f\t%.2f", &sum_of_3, &avg_of_3);
    return 0;
}
void sum_n_avg(double one, double two, double three, double *sum_of_3, double *avg_of_3){
    *sum_of_3 = one + two + three;
    *avg_of_3 = (*sum_of_3)/3;
}