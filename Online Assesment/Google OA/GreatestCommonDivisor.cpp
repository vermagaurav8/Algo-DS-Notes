#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{

    int level;
    cin >> level;

    if (level == 0)
    {
        cout << 0;
        return 0;
    }

    int minGCD = INT_MAX;
    int maxGCD = INT_MIN;

    int root;

    for (int i = 0; i <= level; i++)
    {
        if (i == 0)
        {
            cin >> root;
        }
        else
        {
            for (int j = 0; j < pow(2, i); j += 2)
            {
                int a, b;
                cin >> a >> b;
                if (a == -1 || b == -1)
                {
                    continue;
                }
                int newgcd = gcd(a, b);
                if (newgcd < minGCD)
                {
                    minGCD = newgcd;
                }
                if (newgcd > maxGCD)
                {
                    maxGCD = newgcd;
                }
            }
        }
    }

    if (minGCD == INT_MAX && maxGCD == INT_MIN)
    {
        cout << "0" << endl;
        return 0;
    }

    cout << (maxGCD - minGCD) << endl;

    return 0;
}