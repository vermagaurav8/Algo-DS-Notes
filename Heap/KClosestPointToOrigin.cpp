#include <bits/stdc++.h>
using namespace std;

void Kclosest(int array[][2], int k, int row, int col)
{
    priority_queue<pair<int, pair<int, int>>> MaxHeap;

    for (int i = 0; i < row; i++)
    {
        MaxHeap.push({array[i][0] * array[i][0] + array[i][1] * array[i][1], {array[i][0], array[i][1]}});
        if (MaxHeap.size() > k)
        {
            MaxHeap.pop();
        }
    }

    while (!MaxHeap.empty())
    {
        pair<int, int> p = MaxHeap.top().second;
        cout << "{" << p.first << ", " << p.second << "}"
             << " ";
        MaxHeap.pop();
    }
}

int main()
{

    int array[][2] = {{1, 3}, {-2, 2}, {5, 8}, {0, 1}};
    int k = 2;
    int row = 4, col = 2;

    Kclosest(array, k, row, col);
    return 0;
}