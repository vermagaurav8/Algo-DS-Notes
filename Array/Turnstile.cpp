#include <bits/stdc++.h>

using namespace std;

void turnstile(int NumberOfCustomer, int arrayTime[], int direction[])
{
    int TimeOfPassing[NumberOfCustomer];
    int currentTime = 0, prevSecondStatus = -1;

    queue<int> entry, exit;
    for (int i = 0; i < NumberOfCustomer; i++)
    {
        if (direction[i] == 1)
            exit.push(i);
        else
            entry.push(i);
    }

    while (!exit.empty() || !entry.empty())
    {

        if (!exit.empty() && arrayTime[exit.front()] <= currentTime && (prevSecondStatus == 1 || prevSecondStatus == -1 || entry.empty() || (arrayTime[entry.front()] > currentTime)))
        {
            TimeOfPassing[exit.front()] = currentTime;
            prevSecondStatus = 1;
            exit.pop();
        }
        else if (!entry.empty() && arrayTime[entry.front()] <= currentTime)
        {
            TimeOfPassing[entry.front()] = currentTime;
            prevSecondStatus = 0;
            entry.pop();
        }
        else
        {
            prevSecondStatus = -1;
        }

        currentTime++;
    }

    // print
    for (int i = 0; i < NumberOfCustomer; i++)
    {
        cout << TimeOfPassing[i] << " ";
    }
}

int main()
{
    int NumberOfCustomer;
    cin >> NumberOfCustomer;

    int arrayTime[NumberOfCustomer];
    for (int i = 0; i < NumberOfCustomer; i++)
    {
        cin >> arrayTime[i];
    }

    int direction[NumberOfCustomer];
    for (int i = 0; i < NumberOfCustomer; i++)
    {
        cin >> direction[i];
    }
    cout << endl;

    turnstile(NumberOfCustomer, arrayTime, direction);

    return 0;
}