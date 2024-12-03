#include <stdio.h>
int main(){
    int a=55, b=105, c=89, d=68;
    int *arr[] = {&a,&b,&c,&d};
    int maxVar = a;
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if (**(arr+i) > maxVar){
            maxVar = **(arr+i);
        }
    }
    printf("Largest element is %d\n", maxVar);
    return 0;
}