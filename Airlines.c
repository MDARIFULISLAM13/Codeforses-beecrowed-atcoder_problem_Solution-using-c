#include <stdio.h>
int main()
{
    int a;
    scanf("%d ", &a);
    int b, c;
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        int d = 100 * b;
        int e = c - d;
        if (e <= 0)
        {
            printf("0\n");
        }
        else
        {

            int t = e / 100;
            if (e % 100 != 0)
            {
                t = t + 1;
            }
            printf("%d\n", t);
        }
    }
}