#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removedup(string str, int i)
{
    if (str.empty())
    {
        return "";
    }
    if (str[i] == str[i + 1])
    {
        str.erase(i, 1);
        return removedup(str, i);
    }
    else
    {
        return removedup(str, i + 1);
    }
    return removedup(str, i + 1);
}

int main()
{
    string str = "Gaurav";
    cout << removedup(str, 0);
}