#include <Stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b[a];
    int total = 0;
    int my = 0;
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
        total += b[i];
    }
    for (int l = 0; l < a; l++)
    {
        for (int i = 0; i < a; i++)
        {
            if (b[i] > b[i - 1])
            {
                int d = b[i - 1];

                b[i - 1] = b[i];
                b[i] = d;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (my > total)
        {
            break;
        }
        my = my + b[i];
        total = total - b[i];
        count++;
    }
    printf("%d\n", count);
}