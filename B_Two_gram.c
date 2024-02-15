#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    char b[a];
    scanf("%s", &b);
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if (count == 2)
        {
            break;
        };
        if (b[i] > 64 && b[i] < 91)
        {
            printf("%c", b[i]);

            count++;
        }
    }
}