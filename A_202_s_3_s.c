#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    scanf("%s", &a);
    int b = strlen(a);
    a[b - 1] = a[b - 1] + 1;
    printf("%s\n", a);
}