#include <bits/stdc++.h>
using namespace std;

//examples of data types are int, long int, long long int, float, double, char, boolean, strings.

int main () {
    int number = 42;  // Declare an integer variable 'number' with the value 42
    cout << "Number: " << number << endl; // Print the value of 'number'
    return 0; // Return 0 to indicate successful program execution

    char letter = 'A';
    cout << "Letter: " << letter << endl;
    return 0;

    float decimal = 4.18;
    cout << "Decimal: " << decimal << endl;
    return 0;

    bool isTrue = true;
    cout << "Is True? " << isTrue << endl;
    return 0;

    double bigDecimal = 2.238768;
    cout << "Big Decimal: " << bigDecimal << endl;
    return 0;

    
    // so what is the difference between float and double?

    double n;
    n = 1e24;
    cout << fixed << n << endl; // 999999999999999983222784.000000
    return 0;
    // so using double is less accurate than using float


    
    long int bigNumber = 26783483648; 
    cout << "Long Integer: " << bigNumber << endl;
    return 0;

    long long int biggerNumber = 9836253642036854775807; 
    cout << "Long Long Integer: " << biggerNumber << endl;
    return 0;

    string message = "Hello, C++!";
    cout << "Messages: " << message << endl;
    return 0;
}