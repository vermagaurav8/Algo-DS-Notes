#include <bits/stdc++.h>
using namespace std;

void minCost(int array[], int size)
{
    priority_queue<int, vector<int>, greater<int>> MinHeap;

    for (int i = 0; i < size; i++)
    {
        MinHeap.push(array[i]);
    }

    int cost = 0;

    while (MinHeap.size() >= 2)
    {
        int first = MinHeap.top();
        MinHeap.pop();
        int second = MinHeap.top();
        MinHeap.pop();

        cost = cost + first + second;
        MinHeap.push(first + second);
    }

    cout << "Cost: " << cost;
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5}; //length of rope
    minCost(array, 5);
}