#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    //making simple array with 5 elements

    for (auto x : arr) { //(initialisation : name of array)
        cout << x << " ";
    }

    cout << endl;

    // auto keyword is used to automatically detect the data type of the variable
    // so in this case x is an integer
    // so this will be equivalent to 
    // for (int x: ar) {
    //     cout << x << " "; }

    for(int x : arr) {
    
        cout << x <<"\n";
    }
    
}