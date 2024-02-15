#include <stdio.h>

#define MAX_N 200005

int max(int a, int b)
{
    return (a > b) ? a : b;
}

long long solve_test_case(int n, int k, int a[], int b[])
{
    long long total_experience = 0;
    int completed[MAX_N] = {0};

    for (int i = 0; i < n; ++i)
    {
        total_experience += a[i];
    }

    int quests_completed = 0;
    for (int i = 0; i < n; ++i)
    {
        if (quests_completed >= k)
        {
            break;
        }

        total_experience += (long long)completed[i] * (b[i] - a[i]);
        quests_completed += !completed[i];
        completed[i] = 1;
    }

    return total_experience;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[MAX_N], b[MAX_N];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &b[i]);
        }

        long long result = solve_test_case(n, k, a, b);
        printf("%lld\n", result);
    }

    return 0;
}
