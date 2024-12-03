#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number:");
    scanf("%d", &n);
    int sum = 0;
    for (i = 1; i <= 10; i++)
        printf("%d\t", n * i);
    printf("\n");
    for (int i = 1; i <= 10; i++)
        printf("%d\t", i);
    printf("\n");
    for (int i = 1; i <= 10; i++)
        printf("%d\t", n);

    return 0;
}

