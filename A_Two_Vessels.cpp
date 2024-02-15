#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int b, c, d;
        cin >> b >> c >> d;
        float f = (b + c) / 2.0;
        int count = 0;
        if (b > c)
        {
            while (c < f)
            {
                c = c + d;
                count++;
            }
            cout << count << "\n";
        }
        else if (b < c)
        {
            while (b < f)
            {
                b = b + d;
                count++;
            }
            cout << count << "\n";
        }
        else if (b == c)
        {
            cout << "0\n";
        }
    }
}