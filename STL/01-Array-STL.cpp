#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int,5>ar;
    ar[0] = 1; 
    ar[1] = 1;
    ar[2] = 1;
    ar[3] = 1;
    ar[4] = 1;
    cout << ar.size() << endl;
    cout << ar[5] << endl; // Some garbage value



    array<int, 5> arr = { 1, 5, 2, 4, 7 };

    // print the array using for loop
    for (auto it: arr) {
        cout << it << " ";
    }

    // Notes - 
    // 1. at() - function is used to idenfity the element at the given index
    // 2. empty() - to make give array is empty or not
    // 3. front() - to get the front element into the array
    // 4. back() - to get the last element into the array 

    cout << arr.at(2) << endl;
    cout << arr.empty() << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;



    array <int, 5> arrcontainer;
    // fill the array element with 1 value
    arrcontainer.fill(1);

    for (auto i: arrcontainer) {
        cout << i << " ";
    }

    return 0;
}