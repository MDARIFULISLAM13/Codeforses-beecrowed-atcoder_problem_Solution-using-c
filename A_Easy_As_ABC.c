
#include <stdio.h>
int main()
{
    char a[100];
    char b[100];
    char c[100];
    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%s", &c);
    printf("%c%c%c", c[1], b[1], c[1]);
}