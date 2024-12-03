#include <stdio.h>
int leap(int year){
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        return 1;
    }
    return 0;
}
int day_of_year(int month, int day, int year){
    int days_in_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(leap(year)){
        days_in_month[2] = 29;
    }
    int day_number = 0;
    for(int i=1; i<month; i++){
        day_number += days_in_month[i];
    }
    day_number += day;
    return day_number;
}

int main(){
    int month, day, year;
    printf("Enter day (1-31): ");
    scanf("%d", &day);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year : ");
    scanf("%d", &year);

    int days_in_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(month<1 || month>12|| day<1 || day>31 ||
      (month==2 && day>(leap(year) ? 29:28)) ||
      (month!=2 && day > days_in_month[month])){
        printf("Invalid date\n");
        return 1;
    }
    int day_number = day_of_year(month, day, year);
    printf("Day number of the date %02d/%02d/%d is : %d\n", day, month, year, day_number);
    return 0;
}