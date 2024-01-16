#include<bits/stdc++.h>
using namespace std;

int main(){
    //int a = 5;
    int ar[3] ={1,2,3};
            //  0 1 2
    array<int, 5> arr = {1, 2, 3, 4, 5}; //array<datatype, size> name = {content}

    string fruits[3] = {"apple","mango","banana"};
    cout << ar[0] << endl; //output: 1
    int n = sizeof(ar)/sizeof(ar[0]);
    // sizeof(ar) = 12 bytes
    // sizeof(ar[0]) = 4 bytes
    // 12/4 = 3
   
    
    cout << n << endl;



    for (int i = 0; i < n; ++i) {
        cout << ar[i] << " "; //output: 1 2 3
    }

    cout << endl;

    // we can also make multidimensional arrays

    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout << matrix[1][1] << endl;
    for(int r = 0; r < 3; ++r) {
        for(int c = 0; c < 3; ++c) {
            cout << matrix[r][c] << " ";
        }
        
        cout << endl;
    }
}    
