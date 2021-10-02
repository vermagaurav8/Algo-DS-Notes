#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int array[], int length, int k)
{
    priority_queue<int> maxHeap;

    for (int i = 0; i < length; i++)
    {
        maxHeap.push(array[i]);
        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }

    return maxHeap.top();
}

int main()
{
    int array[6];
    int length = 6;

    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }

    int k;
    cin >> k;

    cout << "Kth Smalles: " << kthSmallest(array, length, k) << endl;
    return 0;
}
