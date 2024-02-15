#include <stdio.h>

#define MAX_N 100005

long long power_of_two(int exponent)
{
    long long result = 1;
    for (int i = 0; i < exponent; ++i)
    {
        result *= 2;
    }
    return result;
}

void count_distinct_strings(int t, int test_cases[][MAX_N])
{
    for (int i = 0; i < t; ++i)
    {
        int n = test_cases[i][0];
        char s[MAX_N];
        scanf("%s", s);

        int char_count[26] = {0};

        for (int j = 0; j < n; ++j)
        {
            char_count[s[j] - 'a']++;
        }

        long long result = 0;

        for (int j = 0; j < 26; ++j)
        {
            if (char_count[j] > 0)
            {
                result += power_of_two(char_count[j]) - 1;
            }
        }

        printf("%lld\n", result);
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    int test_cases[t][MAX_N];

    for (int i = 0; i < t; ++i)
    {
        scanf("%d", &test_cases[i][0]); // Read the length of the string
        for (int j = 1; j <= test_cases[i][0]; ++j)
        {
            scanf(" %c", &test_cases[i][j]); // Read each character of the string
        }
    }

    count_distinct_strings(t, test_cases);

    return 0;
}
