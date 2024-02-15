#include <stdio.h>
#include <string.h>
int main()
{
    char a[399];
    scanf("%s", &a);
    int b = strlen(a);
    char c[] = "hello";
    int count = 0;
    for (int i = 0; i < b; i++)
    {
        if (a[i] == c[count])
        {

            count++;
        };
    }
    printf("\n");
    if (count > 4)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}