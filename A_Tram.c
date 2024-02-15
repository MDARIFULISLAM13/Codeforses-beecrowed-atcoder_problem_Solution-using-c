#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b, c;
    int sum = 0;
    int max = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        int d = sum - b;
        sum = d + c;
        if (sum > max)
        {
            max = sum;
        }
    }
    printf("%d\n", max);
}