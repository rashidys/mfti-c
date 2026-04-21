#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int iabs(int x) {return (x < 0) ? -x : x;}
int eu_mod(int x, int y)
{
	int r;
	assert(y != 0);
	r = x % y; 
	if (r < 0)
    	r += iabs(y);
	return r;
}
unsigned long long gcd(unsigned long long x, unsigned long long y)
{	
	unsigned long long q;
	unsigned long long tmp;
	while(y != 0)
    {
  		if (y > x){
    		tmp = y;
    		y = x;
    		x = tmp;
        }	
    	q = eu_mod(x, y);
        x = y;
    	y = q;
    }
	return x;
}

int main()
{
	unsigned long long x = 0, y = 0, g;
    int res;
	
	res = scanf("%llu %llu", &x, &y);
	assert(res == 2);
	g = gcd(x, y);
	printf("%llu\n", g);
	return 0;
	
}
