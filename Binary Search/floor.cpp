// fLOOOR IS THE  SMALLEST NUMBER WHICH IS GREATER THAN EQUAL TO TARGET
#include<bits/stdc++.h>
using namespace std;

int floorOfNum(int arr[], int n, int target) {
    int start = 0, end = n-1, floor = -1;
    while(start <= end) {
           int mid = (start+end)/2;

            if(target == arr[mid]) {           
                return arr[mid];
            } else if (target < arr[mid]) {
                end = mid-1;
            } else {
                floor = arr[mid]; 
                start = mid+1;
            }
    }
    return floor;
}

int main()
{
    int arr[7] = {2,3,5,9,14,16,18};
    int target;
    cin >> target;

    cout << floorOfNum(arr, 7, target);
    return 0;
}