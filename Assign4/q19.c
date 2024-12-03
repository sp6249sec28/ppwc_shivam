#include <stdio.h>
void sum_n_avg(double n1, double n2, double n3, double *sum, double *avg);
int main(){
    double sum, avg;
    double n1,n2,n3;
    n1=10.5, n2= 20.8, n3=45;
    sum_n_avg(n1,n2,n3,&sum,&avg);
    printf("Sum & Average : %.2f\t%.2f", sum, avg);
    return 0;
}
void sum_n_avg(double n1, double n2, double n3, double *sum, double *avg){
    *sum = n1 + n2 + n3;
    *avg = (*sum)/3;
}