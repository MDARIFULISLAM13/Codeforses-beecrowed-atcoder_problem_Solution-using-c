#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    scanf("%s", &a);
    char b[] = "WUB";
    int c = strlen(a);
    int count = 0;
    for (int i = 0; i < c; i++)
    {
        if (a[i] == b[0] && a[i + 1] == b[1] && a[i + 2] == b[2])
        {

            i = i + 2;
            if (count == 1)
            {
                printf(" ");
                count = 0;
            }
        }
        else
        {
            printf("%c", a[i]);
            count = 1;
        }
    }
}