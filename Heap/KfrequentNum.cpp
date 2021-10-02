#include <bits/stdc++.h>
using namespace std;

void KfrequentNum(int array[], int k, int size)
{
    unordered_map<int, int> map;
    for (int i = 0; i < size; i++)
    {
        map[array[i]]++;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> MinHeap;

    for (auto it = map.begin(); it != map.end(); it++)
    {
        MinHeap.push({it->second, it->first});
        if (k < MinHeap.size())
        {
            MinHeap.pop();
        }
    }

    while (!MinHeap.empty())
    {
        cout << MinHeap.top().second << " ";
        MinHeap.pop();
    }
}

int main()
{
    int array[7] = {1, 1, 1, 3, 2, 2, 4};
    int k = 2;

    KfrequentNum(array, k, 7);
    return 0;
}