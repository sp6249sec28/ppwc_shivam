#include <stdio.h>
#define con(m, a) m##a
int main()
{
    int con(x, 3) = 120;
    printf("Concate=%d\n", x3);
    con(x, 3) = x3 + con(12, 45);
    printf("Concate=%d\n", x3);
    printf("con(x,3)=%d\n", con(x, 3));
    return 0;
}