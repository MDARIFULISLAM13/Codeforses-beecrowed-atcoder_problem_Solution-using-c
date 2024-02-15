#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        char b[2];
        scanf("%s", b);
        printf("%d", b);
    }
}