#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int size, int target) {
    int begin = 0;
    int end = size - 1;
    while (begin <= end) {
        int mid = begin + (end - begin)/2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }
        else {
            begin = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin >> target;
    int result = binarysearch(arr, size, target);

    if (result != -1) {
        cout << "Element is present at index " << result << endl;
    }
    else {
        cout << "Element is not present in array" << endl;
    }
    return 0;
}