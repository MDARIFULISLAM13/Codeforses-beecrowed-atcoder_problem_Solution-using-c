#include <stdio.h>
#include <string.h>

int main()
{
    char s[105];
    scanf("%s", s);
    int n = strlen(s);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'Q')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 'A')
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'Q')
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
