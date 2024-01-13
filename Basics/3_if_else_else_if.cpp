#include<bits/stdc++.h>
using namespace std;
//shreyans
int main() {
    int n;
    cout << "Enter a number: ";
   
    cin >> n;
    /*Taking number as an input*/

    /*Condition 1*/
    if (n > 0) {
        cout << "Enter a positive number." << endl;
    }
    /*else if condition 2*/
    else if (n < 0) {
        cout << "Enter a negative number. " << endl;
    
    /*if nothing goes as planned 😭*/
    } else {
        cout << "Enter a zero. " << endl;
    }

    return 0;
}