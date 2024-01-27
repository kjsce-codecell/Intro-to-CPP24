#include<bits/stdc++.h>
using namespace std;

// you can read '*' as 'value at' and '&' as 'address of'.

int main() {
    int a = 5;
    int *point_a ;
        *point_a = &a;
    
    // This is a pointer variable. It stores the address of the variable a.
    // To declare pointer variable, use the * sign before the variable name.

    cout << *point_a << endl; // 5
    // This will print the value of a.

    cout << point_a << a << endl; // 0x61ff085 
    // This will print the address of the variable a and the value of a.

    
    *point_a = 10; 
    cout << *point_a << endl; // 10 
    cout << point_a << "\n" <<  a << endl; // 0x61ff0810 

    string x = "Hello There";
    // here x is a string variable.

    cout << &x; 
    // This will print the address of the variable x.

    return 0;
}
