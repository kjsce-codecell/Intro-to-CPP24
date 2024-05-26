#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int m = 5;
    vector<vector<int>> twobasedArray(n, vector<int>(m, 11));

    // print the 2D array
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << twobasedArray[i][j] << " ";
        }
    }

    vector<vector<int>> vis(n, vector<int>(m, 0));

    vis[0][2] = 1;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            if (vis[row][col] == 1) {
                cout << "1 is present into the vector-2d" << endl;
            } else {
            cout << "Entire vector fill by zero" << endl;
            }
        }
    } 
    
    // Methods of vector
    // vis.assign(); // assign the value to the vector
    // vis.empty(); // check the vector is empty or not
    // vis.erase(); // erase the element from the vector
    // vis.end(); // return the iterator to the end
    // vis.size(); // return the size of the vector
    // vis[0].size(); // return the size of the 2D vector
    // vis.data(); // return the pointer to the vector
    // vis.capacity(); // return the capacity of the vector

    return 0;
  
}