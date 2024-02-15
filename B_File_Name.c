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
        if (b[i] == 'x' && b[i - 1] == 'x' && b[i - 2] == 'x')
        {

            count++;
        }
    }
    printf("%d\n", count);
}