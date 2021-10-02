#include <bits/stdc++.h>
using namespace std;

void NearlySorted(int array[], int k, int size)
{

    priority_queue<int, vector<int>, greater<int>> MinHeap;

    for (int i = 0; i < size; i++)
    {
        MinHeap.push(array[i]);
        if (MinHeap.size() > k)
        {
            cout << MinHeap.top() << " ";
            MinHeap.pop();
        }
    }

    while (!MinHeap.empty())
    {
        cout << MinHeap.top() << " ";
        MinHeap.pop();
    }
}

int main()
{
    int array[7] = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;

    NearlySorted(array, k, 7);
    return 0;
}