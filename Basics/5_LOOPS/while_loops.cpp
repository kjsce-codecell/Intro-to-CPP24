/* while (condition) {
    code to be executed repeatedly
} */


#include<bits/stdc++.h>
using namespace std;

int main() {
    int i = 1;
    while (i <= 10) {
        cout << i << endl;
        ++i;
    }
    return 0;
}

// condition is checked first

// if condition is true, the code inside the loop is executed
// then the iteration is executed

// then the condition is checked again
// if the condition is false, the loop is terminated

// while loop is slightly faster than for loop.
