#include <stdio.h>
int main()
{
    int *ptr;
    ptr = (int *)realloc(NULL, sizeof(int));
    *ptr = 100;
    printf("%d\n", *ptr);
    return 0;
}