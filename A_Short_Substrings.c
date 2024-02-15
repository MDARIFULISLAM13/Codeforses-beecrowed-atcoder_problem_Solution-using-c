#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    char b[1000];
    for (int i = 1; i <= a; i++)
    {
        scanf("%s", &b);
        int c = strlen(b);

        for (int l = 0; l < c; l++)
        {
            printf("%c", b[l]);
            l++;
        }

        printf("%c", b[c - 1]);

        printf("\n");
    }
}