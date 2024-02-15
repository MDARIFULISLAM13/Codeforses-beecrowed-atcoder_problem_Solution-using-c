#include <stdio.h>
#include <string.h>
int main()
{
    char a[300];
    scanf("%s", &a);
    int b = strlen(a);

    for (int i = 0; i < b; i++)
    {
        if (a[i] <= 90)
        {
            a[i] = a[i] + 32;
        };
        if (a[i] == 97 || a[i] == 101 || a[i] == 105 || a[i] == 111 || a[i] == 117 || a[i] == 121)
        {
        }
        else
        {
            printf(".%c", a[i]);
        }
    }
    printf("\n");
}