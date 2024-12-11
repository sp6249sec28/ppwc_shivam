#include <stdio.h>
#define PRINT(i, limit) \
    while (i <= limit) \
    {\
        printf("i=%d\n", i); \
        i = i + 1;           \
    }
int main()
{
    int i = 0;
    PRINT(i, 6);
    return 0;
}