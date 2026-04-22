#include <stdio.h>

int main()
{
    int a, b, p, q;
    scanf("%d%d", &a, &b);
    p = a / b; q = a % b;
    printf("p = %d, q = %d\n", p, q);
    return 0;
}
