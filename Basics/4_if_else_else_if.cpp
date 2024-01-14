#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
   
    cin >> n;
    /*Taking number as an input*/

    /*Condition 1*/
    if (n > 0) {
        cout << "Positive number." << endl; 
    }
    /*else if condition 2*/
    else if (n < 0) {
        cout << "Negative number. " << endl;
    
    /*if nothing goes as planned 😭*/
    } else {
        cout << "Zero. " << endl;
    }

    return 0;
}