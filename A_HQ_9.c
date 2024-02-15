#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", &a);
    int b = strlen(a);
    int d = 5;
    for (int i = 0; i < b; i++)
    {
        if (a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
        {
            printf("YES\n");
            d = 0;
            break;
        };
    }
    if (d == 5)
    {
        printf("NO\n");
    }
}