#include <bits/stdc++.h>
using namespace std;

void kthLargest(int array[], int k, int size)
{
    priority_queue<int, vector<int>, greater<int>> MinHeap;

    for (int i = 0; i < size; i++)
    {
        MinHeap.push(array[i]);
        if (MinHeap.size() > k)
        {
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

    int array[6] = {7, 10, 4, 3, 20, 15};
    int k = 3;

    cout << "Kth Largest: ";
    kthLargest(array, k, 6);
    return 0;
}