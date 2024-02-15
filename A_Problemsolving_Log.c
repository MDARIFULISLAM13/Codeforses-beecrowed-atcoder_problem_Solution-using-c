#include <stdio.h>

int problems_solved(int n, char contest_log[])
{
    int time_required[26];
    for (int i = 0; i < 26; ++i)
    {
        time_required[i] = i + 1;
    }

    int solved_problems = 0;
    int accumulated_time = 0;

    for (int i = 0; i < n; ++i)
    {
        accumulated_time += time_required[contest_log[i] - 'A'];

        if (accumulated_time >= (i + 1))
        {
            ++solved_problems;
        }
    }

    return solved_problems;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i)
    {
        int n;
        scanf("%d", &n);

        char contest_log[n];
        scanf("%s", contest_log);

        int result = problems_solved(n, contest_log);
        printf("%d\n", result);
    }

    return 0;
}
