#include <bits/stdc++.h>
// typedef pair<int, int> p;
using namespace std;

void kclosest(int array[], int k, int target)
{
    priority_queue<pair<int, int>> MaxHeap;
    for (int i = 0; i < 5; i++)
    {
        MaxHeap.push({abs(array[i] - target), array[i]});

        if (MaxHeap.size() > k)
        {
            MaxHeap.pop();
        }
    }

    while (!MaxHeap.empty())
    {
        cout << MaxHeap.top().second << " ";
        MaxHeap.pop();
    }
}

int main()
{
    int array[5] = {5, 6, 7, 8, 9};
    int k = 3;
    int x = 7;

    kclosest(array, k, x);
    return 0;
}