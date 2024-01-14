/*  do {
        // code to be executed repeatedly
}   while (condition);
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i = 11;
    do {
        cout << i << endl;
        ++i;
    } 
    while (i <= 10);

    //Output:
    //11
    
    return 0;
}

// here the condition is checked after the execution of the code inside the loop
// so the code inside the loop is executed at least once
// then the condition is checked
// if the condition is true, the loop is executed again
// if the condition is false, the loop is terminated

// do while loop is slightly slower than while loop and for loop.