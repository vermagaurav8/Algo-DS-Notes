// Sum of elements between k1 smallest and k2 smallest numbers.
#include <bits/stdc++.h>
using namespace std;

int smallest(int array[], int k, int size)
{
    priority_queue<int> maxHeap;

    for (int i = 0; i < size; i++)
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

    int array[6] = {1, 3, 12, 5, 15, 11};
    int k1 = 3;
    int k2 = 6;

    int k1Smallest = smallest(array, k1, 6);
    int k2Smallest = smallest(array, k2, 6);

    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        if (array[i] > k1Smallest && array[i] < k2Smallest)
            sum += array[i];
    }

    cout << sum << " ";

    return 0;
}