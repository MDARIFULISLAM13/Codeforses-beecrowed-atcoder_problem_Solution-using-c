#include <stdio.h>

// Function to get the winning move for Chef
char get_winning_move(char chefina_move)
{
    if (chefina_move == 'R')
    {
        return 'P';
    }
    else if (chefina_move == 'P')
    {
        return 'S';
    }
    else
    {
        return 'R';
    }
}

// Function to find lexicographically smallest moves for Chef
void find_lexicographically_smallest_moves(int t, char test_cases[][100001])
{
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char moves[n + 1];
        scanf("%s", moves);

        char chef_moves[n + 1];

        // Iterate through Chefina's moves to determine Chef's moves
        for (int j = 0; j < n; j++)
        {
            chef_moves[j] = get_winning_move(moves[j]);
        }

        chef_moves[n] = '\0'; // Null-terminate the string

        // Print the result for each test case
        printf("%s\n", chef_moves);
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    char test_cases[t][100001];

    // Input test cases
    for (int i = 0; i < t; i++)
    {
        scanf("%s", test_cases[i]);
    }

    // Find and print lexicographically smallest moves for Chef
    find_lexicographically_smallest_moves(t, test_cases);

    return 0;
}
