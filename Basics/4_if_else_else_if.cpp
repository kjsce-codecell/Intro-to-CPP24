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

    bool a = true;
    bool b = true;

    if(a && b) //All conditions need to be true
    {
        cout << "Both A and B are true" << endl;
    }

    b = false;

    if(a && b) //Since both a and b are not true this will not execute
    {
        cout << "This line will not print";
    }

    if(a || b)//Since at least A is true
    {
        cout << "At least A is true" <<  endl;
    }

    return 0;
}