#include <stdio.h>

int *possible_digits(int a, int b, int c)
{
    static int result[3];

    // Check the parity of counts
    int parity_count[3] = {a % 2, b % 2, c % 2};

    // If there are two different parities, it's impossible
    if (parity_count[0] + parity_count[1] + parity_count[2] == 1)
    {
        result[0] = result[1] = result[2] = 0;
    }
    else
    {
        // Otherwise, it's possible for each digit type
        result[0] = 1 - parity_count[0];
        result[1] = 1 - parity_count[1];
        result[2] = 1 - parity_count[2];
    }

    return result;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        // Get the result for the current test case
        int *result = possible_digits(a, b, c);

        // Print the result for the current test case
        printf("%d %d %d\n", result[0], result[1], result[2]);
    }

    return 0;
}
