#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c;
        scanf("%d %d", &b, &c);
        if (c == 0)
        {
            for (int j = 1; j <= b; j++)
            {
                printf("%d", j);
                if (j < b)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else if (b <= c + 1)
        {
            printf("-1\n");
        }
        else
        {
            int arr[b];
            for (int j = 0; j < b; j++)
            {
                arr[j] = j + 1;
            }

            arr[c] = arr[b - c - 1];

            for (int j = c + 1; j < b - c; j++)
            {
                arr[j] = arr[j] - 1;
            }
            for (int j = 0; j < b; j++)
            {
                printf("%d ", arr[j]);
            }
            printf("\n");
        }
    }
}