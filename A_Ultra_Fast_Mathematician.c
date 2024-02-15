#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    int c = strlen(b);

    for (int i = 0; i < c; i++)
    {
        if (a[i] == b[i])
        {
            printf("0");
        }
        else
        {

            printf("1");
        }
    }
}