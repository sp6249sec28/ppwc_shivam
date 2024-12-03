#include <stdio.h>
int main(){
    char desired_grade;
    float min_avg, curr_avg, final_weight, score_needed;
    printf("Enter the desired grade : ");
    scanf("%c", &desired_grade);
    printf("Enter minimum average required : ");
    scanf("%f", &min_avg);
    printf("Enter current average score : ");
    scanf("%f", &curr_avg);
    printf("Enter how much the final counts as course grade : ");
    scanf("%f", &final_weight);
    score_needed = (min_avg - (curr_avg *(1-final_weight/100)))/(final_weight/100);
    printf("You need a score of %.2f on the final to get a %c grade.", score_needed, desired_grade);
    return 0;
}