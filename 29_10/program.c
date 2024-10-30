#include <stdio.h>

int main()
{
    char number[100];
    printf("Enter a number: ");
    scanf("%s", number);
    for (int i = 0; number[i] != '\0'; i++)
    {
        if (number[i] == '0'){
            number[i] = '1';
        }
        else if (number[i] == '1'){
            number[i] = '0';
        }
    }
    printf("Modified number: %s\n", number);
    return 0;
}