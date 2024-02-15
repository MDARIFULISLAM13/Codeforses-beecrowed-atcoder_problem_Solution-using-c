#include <stdio.h>

void solve_test_case(int n, int k)
{
    // Initialize the result array
    int result[n];

    // Initialize the index variable
    int index = 1;

    // Place the k+1 problem in the middle
    result[k] = n;

    // Place the decreasing order problems before k+1
    for (int i = 0; i < k; ++i)
    {
        result[i] = index;
        ++index;
    }

    // Place the increasing order problems after k+1
    for (int i = k + 1; i < n; ++i)
    {
        result[i] = index;
        ++index;
    }

    // Print the result
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        solve_test_case(n, k);
    }

    return 0;
}
