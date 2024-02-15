#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    long long int a;
    scanf("%lld", &a);
    long long int b = pow(5, a);
    b = b + 1;
    long long int c = 0;
    if (b > 99)
    {
        c = b % 10;
        b = b / 10;
        long long int d = b % 10;
        long long int t = (d * 10) + c;
        printf("%lld\n", t);
    }
    else
    {
        printf("%lld\n", b);
    }
}