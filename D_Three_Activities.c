#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        int c;
        int mla1 = 0, mla2 = 0;
        for (int j = 1; j <= b; j++)
        {
            scanf("%d", &c);
            if (c > mla1)
            {
                mla1 = c;
            }
            else if (c < mla1 && c > mla2)
            {
                mla2 = c;
            }
        }
        int mlb1 = 0, mlb2 = 0;
        for (int j = 1; j <= b; j++)
        {
            scanf("%d", &c);
            if (c > mlb1)
            {
                mlb1 = c;
            }
            else if (c < mlb1 && c > mlb2)
            {
                mla2 = c;
            }
        }
        int mlc1 = 0, mlc2 = 0;
        for (int j = 1; j <= b; j++)
        {
            scanf("%d", &c);
            if (c > mlc1)
            {
                mlc1 = c;
            }
            else if (c < mlc1 && c > mlc2)
            {
                mlc2 = c;
            }
        }
        printf("%d %d\n", mla1, mla2);
        printf("%d %d\n", mlb1, mlb2);
        printf("%d %d\n", mlc1, mlc2);
    }
}