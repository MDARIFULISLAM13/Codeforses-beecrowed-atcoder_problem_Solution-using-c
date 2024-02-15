#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    float d = b + 0.00;
    float c = d / a;
    if (c == 0.5)
    {
        printf("1/2");
    }
    else if (c > 0.5)
    {
        printf("1/1");
    }
    else if (c < 0.5)
    {
        printf("0/1");
    }
}