#include <bits/stdc++.h>
using namespace std;

void frequencySort(int array[], int size)
{
    unordered_map<int, int> HashMap;
    for (int i = 0; i < size; i++)
    {
        HashMap[array[i]]++;
    }

    priority_queue<pair<int, int>> MaxHeap;

    for (auto it = HashMap.begin(); it != HashMap.end(); it++)
    {
        MaxHeap.push({it->second, it->first});
    }

    while (!MaxHeap.empty())
    {
        int count = MaxHeap.top().first;
        int num = MaxHeap.top().second;

        while (count--)
        {
            cout << num << " ";
        }

        MaxHeap.pop();
    }
}

int main()
{
    int array[7] = {1, 1, 1, 2, 2, 3, 4};
    frequencySort(array, 7);
    return 0;
}