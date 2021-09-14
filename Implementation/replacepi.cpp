#include <bits/stdc++.h>
using namespace std;

string replace(string str)
{
    if (str.length() == 0 || str.length() == 1)
        return str;

    if (str[0] == 'p' || str[1] == 'i')
    {
        string remainingResult = replace(str.substr(2));
        return "3.14" + remainingResult;
    }
    else
    {
        return str[0] + replace(str.substr(1));
    }
}

int main()
{
    string str;
    cin >> str;

    cout << replace(str);
    return 0;
}