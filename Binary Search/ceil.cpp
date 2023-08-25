// Ceil = find the smallest elelment in array grreater than equal to the target element,
#include <bits/stdc++.h>
using namespace std;

int ceilOfNum(int arr[], int n, int target) {
    int start = 0, end = n-1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == target) return arr[mid];
        else if(arr[mid] > target) end = mid-1;
        else if(arr[mid] < target) {
            ans = mid;
            start = mid+1;
        }
    }
    return arr[ans+1];
}

int main() {
    int arr[7] = {2,3,5,9,14,16,18};
    int target;
    cin >> target;

    cout << ceilOfNum(arr, 7, target);
    return 0;
}