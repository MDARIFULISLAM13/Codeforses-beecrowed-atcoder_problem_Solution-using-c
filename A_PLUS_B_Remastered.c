#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        int ar[b];
        int arr[b];
        int frr[b];
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &ar[j]);
        }
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (int j = 0; j < b - 1; j++)
        {
            for (int k = 0; k < b - 1; k++)
            {
                if (ar[k + 1] > ar[k])
                {
                    int x = ar[k + 1];
                    ar[k + 1] = ar[k];
                    ar[k] = x;
                }
            }
        }
        for (int j = 0; j < b - 1; j++)
        {
            for (int l = 0; l < b - 1; l++)
            {
                if (arr[l] > arr[l + 1])
                {
                    int y = arr[l];
                    arr[l] = arr[l + 1];
                    arr[l + 1] = y;
                }
            }
        }

        for (int j = 0; j < b; j++)
        {
            frr[j] = ar[j] + arr[j];
        }
        int count = 1;
        for (int j = 0; j < b - 1; j++)
        {
            if (frr[j] == frr[j + 1])
            {
                count++;
            }
        }
        if (count == b)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d", ar[j]);
                if (j < b - 1)
                {
                    printf(" ");
                };
            }
            printf("\n");
            for (int j = 0; j < b; j++)
            {
                printf("%d", arr[j]);
                if (j < b - 1)
                {
                    printf(" ");
                };
            }
            printf("\n");
        }
        else
        {
            printf("-1\n");
        }
    }
}