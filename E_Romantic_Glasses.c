#include <stdio.h>

int existsSubarray(int n, int glasses[])
{
    int prefixSumOdd[n + 1];
    int prefixSumEven[n + 1];

    prefixSumOdd[0] = 0;
    prefixSumEven[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        prefixSumOdd[i] = prefixSumOdd[i - 1] + (i % 2 == 1 ? glasses[i - 1] : 0);
        prefixSumEven[i] = prefixSumEven[i - 1] + (i % 2 == 0 ? glasses[i - 1] : 0);
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int sumOdd = prefixSumOdd[j] - prefixSumOdd[i - 1];
            int sumEven = prefixSumEven[j] - prefixSumEven[i - 1];

            if ((i % 2 == 1 && sumOdd == sumEven) || (i % 2 == 0 && sumOdd == sumEven))
            {
                return 1;
            }
        }
    }

    return 0; // No such subarray exists
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int glasses[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &glasses[i]);
        }

        if (existsSubarray(n, glasses))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
