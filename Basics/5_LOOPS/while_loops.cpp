#include<bits/stdc++.h>
using namespace std;

/* while (condition) {
    code to be executed repeatedly
} */

int main() {
    int i = 0;
    while (i <= 10) {
        cout << i << endl;
        ++i;
    }

    //Ouput:
    // 0
    // 1
    // 2
    // 3
    // 4
    // 5
    // 6
    // 7
    // 8
    // 9
    // 10

    return 0;
}

// condition is checked first

// if condition is true, the code inside the loop is executed
// then the iteration is executed

// then the condition is checked again
// if the condition is false, the loop is terminated

// while loop is slightly faster than for loop.
