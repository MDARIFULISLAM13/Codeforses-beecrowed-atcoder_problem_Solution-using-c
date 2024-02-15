#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b = a / 365;
    int c = (a % 365) / 30;
    int d = (a % 365) % 30;
    printf(" %d ano(s)\n%d mes(es)\n%d dia(s)\n", b, c, d);
    return 0;
}