#include <stdio.h>
#include <assert.h>
int main()
{
    int a, b, res, r, tmp;
    res = scanf("%d %d", &a, &b);
    assert(res == 2);
    while ((r =  a % b) != 0) 
    {
                 
        printf("%d ",  a / b);
        a = b;
        b = r;
    
    }
    if (r == 0)
        printf("%d\n", a / b);

    return 0;
}
