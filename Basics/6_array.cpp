#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[3] ={1,2,3};
    array<int, 5> arr = {1, 2, 3, 4, 5}; //array<datatype, size> name = {content}

    string fruits[3] = {"apple","mango","banana"};

    int n = sizeof(ar)/sizeof(ar[0]);
    // sizeof(ar) = 12 bytes
    // sizeof(ar[0]) = 4 bytes
    // 12/4 = 3
    
    cout << n << endl;

    for (int i = 0; i < n; ++i) {
        cout << ar[i] << " ";
    }

    // another way to print array
    for (auto x: ar) {
        cout << x << " ";
    }

    // auto keyword is used to automatically detect the data type of the variable
    // so in this case x is an integer
    // so this will be equivalent to 
    // for (int x: ar) {
    //     cout << x << " "; }

    // we can also make multidimensional arrays

    int matrix[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    for(int r = 0; r < 3; ++r) {
        for(int c = 0; c < 3; ++c) {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
}    
